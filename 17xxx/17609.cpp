#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &s, int l, int r) {
  while (l < r) {
    if (s[l++] != s[r--]) return false;
  }
  return true;
}

int solve(void) {
  string s; cin >> s;
  if (check(s, 0, s.length()-1)) return 0;

  int l = 0, r = s.length()-1;
  while (l < r && s[l] == s[r]) {
    l++; r--;
  }
  return check(s, l+1, r) || check(s, l, r-1) ? 1 : 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}