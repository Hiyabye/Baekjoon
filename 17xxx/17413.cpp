#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  stack<char> st;
  bool tag = false;
  for (char c : s) {
    if (c == '<') {
      while (!st.empty()) cout << st.top(), st.pop();
      cout << c;
      tag = true;
    } else if (c == '>') {
      cout << c;
      tag = false;
    } else if (tag) {
      cout << c;
    } else if (c == ' ') {
      while (!st.empty()) cout << st.top(), st.pop();
      cout << c;
    } else {
      st.push(c);
    }
  }
  while (!st.empty()) cout << st.top(), st.pop();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}