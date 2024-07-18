#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  stack<char> st;
  for (char c : s) {
    if (st.empty() || st.top() == c) {
      st.push(c);
    } else {
      cout << st.size() << st.top();
      while (!st.empty()) st.pop();
      st.push(c);
    }
  }
  if (!st.empty()) cout << st.size() << st.top();
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}