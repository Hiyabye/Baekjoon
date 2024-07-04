#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

Matrix matadd(const Matrix &a, const Matrix &b) {
  int sz = a.size();
  Matrix c(sz, vector<int>(sz));
  for (int i=0; i<sz; i++) for (int j=0; j<=i; j++) {
    c[i][j] = a[i][j] + b[i][j];
  }
  return c;
}

Matrix matmul(const Matrix &a, const Matrix &b) {
  int sz = b.size() - a.size() + 1;
  Matrix c(sz, vector<int>(sz, 0));
  for (int i=0; i<sz; i++) for (int j=0; j<=i; j++) for (int k=0; k<a.size(); k++) for (int l=0; l<=k; l++) {
    c[i][j] += a[k][l] * b[k+i][l+j];
  }
  return c;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  unordered_map<string, Matrix> mp;
  while (n--) {
    string k; int l; cin >> k >> l;
    Matrix m(l, vector<int>(l));
    for (int j=0; j<l; j++) for (int k=0; k<=j; k++) cin >> m[j][k];
    mp[k] = m;
  }

  cin.ignore();
  string s; getline(cin, s);
  stringstream ss(s); string t;
  stack<string> st;

  int idx = 0;
  while (ss >> t) {
    string tag = "temp" + to_string(idx++);
    if (t == "+") {
      Matrix b = mp[st.top()]; st.pop();
      Matrix a = mp[st.top()]; st.pop();
      mp[tag] = matadd(a, b);
      st.push(tag);
    } else if (t == "*") {
      Matrix b = mp[st.top()]; st.pop();
      Matrix a = mp[st.top()]; st.pop();
      if (a.size() > b.size()) { cout << "Invalid Expression\n"; return true; }
      mp[tag] = matmul(a, b);
      st.push(tag);
    } else {
      st.push(t);
    }
  }

  Matrix ans = mp[st.top()];
  for (int i=0; i<ans.size(); i++) {
    for (int j=0; j<=i; j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}