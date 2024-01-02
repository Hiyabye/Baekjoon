#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s;
  cin >> s;
  if (s == "#") return false;

  int ans = 0;
  for (int i=0; i<s.length(); i++) {
    switch (s[i]) {
      case '-': ans += 0 * (1 << 3*(s.length()-i-1)); break;
      case '\\': ans += 1 * (1 << 3*(s.length()-i-1)); break;
      case '(': ans += 2 * (1 << 3*(s.length()-i-1)); break;
      case '@': ans += 3 * (1 << 3*(s.length()-i-1)); break;
      case '?': ans += 4 * (1 << 3*(s.length()-i-1)); break;
      case '>': ans += 5 * (1 << 3*(s.length()-i-1)); break;
      case '&': ans += 6 * (1 << 3*(s.length()-i-1)); break;
      case '%': ans += 7 * (1 << 3*(s.length()-i-1)); break;
      case '/': ans += -1 * (1 << 3*(s.length()-i-1)); break;
    }
  }
  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}