#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  string ans = "";
  for (char c : s) {
    switch (c) {
      case 'b': ans = 'd' + ans; break;
      case 'd': ans = 'b' + ans; break;
      case 'p': ans = 'q' + ans; break;
      case 'q': ans = 'p' + ans; break;
      case 'i': case 'o': case 'v': case 'w': case 'x': ans = c + ans; break;
      default: cout << "INVALID" << "\n"; return true;
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