#include <iostream>
#include <set>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  set<char> st(s.begin(), s.end());

  return s.length() == 7 && st.size() == 2 && s[0] == s[1] && s[1] == s[4] && s[2] == s[3] && s[3] == s[5] && s[5] == s[6];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}