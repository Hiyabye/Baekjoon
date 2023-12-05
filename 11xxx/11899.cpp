#include <iostream>
#include <string>
#include <stack>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int cnt = 0;
  stack<char> st;
  for (char c : s) {
    if (c == '(') st.push(c);
    else if (st.empty()) cnt++;
    else st.pop();
  }

  cout << cnt + st.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}