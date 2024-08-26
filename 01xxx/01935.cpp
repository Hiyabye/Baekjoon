#include <iomanip>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  vector<double> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  stack<double> st;
  for (char c : s) {
    if ('A' <= c && c <= 'Z') {
      st.push(v[c - 'A']);
    } else {
      double a = st.top(); st.pop();
      double b = st.top(); st.pop();
      if (c == '+') st.push(b + a);
      else if (c == '-') st.push(b - a);
      else if (c == '*') st.push(b * a);
      else if (c == '/') st.push(b / a);
    }
  }
  cout << fixed << setprecision(2) << st.top();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}