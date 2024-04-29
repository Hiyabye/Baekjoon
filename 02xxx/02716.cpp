#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  int ans = 0;
  stack<char> st;
  for (char c : s) {
    if (c == '[') st.push(c);
    else          st.pop();
    ans = max(ans, (int)st.size());
  }
  cout << (1 << ans) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}