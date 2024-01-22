#include <iostream>
#include <stack>
#include <string>
using namespace std;

int solve(void) {
  string s; cin >> s;

  int ans = 0, cur = 1;
  char prev = '\0';
  stack<int> st;
  for (char c : s) {
    if (c == '(') {
      cur *= 2;
      st.push(c);
    } else if (c == ')') {
      if (st.empty() || st.top() != '(') return 0;
      else if (prev == '(') {
        ans += cur;
        cur /= 2;
        st.pop();
      } else {
        cur /= 2;
        st.pop();
      }
    } else if (c == '[') {
      cur *= 3;
      st.push(c);
    } else if (c == ']') {
      if (st.empty() || st.top() != '[') return 0;
      else if (prev == '[') {
        ans += cur;
        cur /= 3;
        st.pop();
      } else {
        cur /= 3;
        st.pop();
      }
    } else return 0;
    prev = c;
  }
  return st.empty() ? ans : 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  cout << solve();
  return 0;
}