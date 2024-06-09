#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  stack<char> st;
  for (char c : s) {
    if (st.empty()) st.push(c);
    else if (st.top() == '(' && c == ')') st.pop();
    else st.push(c);
  }
  cout << st.size() / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}