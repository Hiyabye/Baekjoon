#include <bits/stdc++.h>
using namespace std;

bool solve(void) {
  string s;
  getline(cin, s);
  if (s == ".") return false;

  stack<char> st;
  bool ok = true;
  for (int i=0; i<s.size(); i++) {
    switch (s[i]) {
    case '(': case '[': st.push(s[i]);
                        break;
    case ')': if (st.empty() || st.top() != '(') ok = false;
              else st.pop();
              break;
    case ']': if (st.empty() || st.top() != '[') ok = false;
              else st.pop();
              break;
    }
  }
  if (!st.empty()) ok = false;
  cout << (ok ? "yes\n" : "no\n");
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}