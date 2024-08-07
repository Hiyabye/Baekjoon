#include <iostream>
#include <string>
using namespace std;

int solve(void) {
  string s; cin >> s;

  if (s.find("lol") != string::npos) return 0;
  if (s.find("lo") != string::npos || s.find("ol") != string::npos || s.find("ll") != string::npos) return 1;
  for (int i=2; i<s.length(); i++) if (s[i-2] == 'l' && s[i] == 'l') return 1;
  if (s.find("l") != string::npos || s.find("o") != string::npos) return 2;
  return 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}