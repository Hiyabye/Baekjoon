#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s[0] < 'A' || s[0] > 'F') return false;
  if (s[0] != 'A') s = s.substr(1);
  if (s.empty() || s[0] != 'A') return false;
  while (!s.empty() && s[0] == 'A') s = s.substr(1);
  if (s.empty() || s[0] != 'F') return false;
  while (!s.empty() && s[0] == 'F') s = s.substr(1);
  if (s.empty() || s[0] != 'C') return false;
  while (!s.empty() && s[0] == 'C') s = s.substr(1);
  if (s.empty()) return true;
  if (s.length() > 1) return false;
  return 'A' <= s[0] && s[0] <= 'F';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "Infected!" : "Good") << "\n";
  return 0;
}