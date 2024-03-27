#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s == "*") return false;

  int ans = 0;
  double dur = 0.0;
  for (char c : s) {
    switch (c) {
      case '/': if (dur == 1.0) ans++; dur = 0.0; break;
      case 'W': dur += 1.0; break;
      case 'H': dur += 0.5; break;
      case 'Q': dur += 0.25; break;
      case 'E': dur += 0.125; break;
      case 'S': dur += 0.0625; break;
      case 'T': dur += 0.03125; break;
      case 'X': dur += 0.015625; break;
    }
  }
  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}