#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &s) {
  for (int i=1; i<s.length()-1; i++) {
    if (s[i] == 'O') return false;
  }
  return true;
}

int solve(void) {
  string s; cin >> s;
  if (check(s)) return -1;

  if (s.find("MOO") != string::npos) return s.length() - 3;
  if (s.find("MOM") != string::npos || s.find("OOO") != string::npos) return s.length() - 2;
  if (s.find("OOM") != string::npos) return s.length() - 1;
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) cout << solve() << "\n";
  return 0;
}