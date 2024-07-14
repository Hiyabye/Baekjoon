#include <iostream>
#include <stack>
#include <string>
using namespace std;

string calc(const string &s) {
  string ret;
  stack<char> st;

  for (char c : s) {
    if (st.empty() || st.top() == c) {
      st.push(c);
    } else {
      ret += to_string(st.size()) + st.top();
      while (!st.empty()) st.pop();
      st.push(c);
    }
  }
  if (!st.empty()) ret += to_string(st.size()) + st.top();
  return ret;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  while (n--) s = calc(s);
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}