#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  stack<char> st;
  bool save = false;
  string ans = "";
  
  for (char c : s) {
    if (c == '(') {
      save = true;
    } else if (c == ')') {
      save = false;
      while (!st.empty()) {
        ans += st.top();
        st.pop();
      }
    } else if (save) {
      st.push(c);
    } else {
      ans += c;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}