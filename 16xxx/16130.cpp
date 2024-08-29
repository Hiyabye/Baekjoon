#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) {
  return c >= 'A' ? c - 'A' + 10 : c - '0';
}

void solve(void) {
  string s; cin >> s;

  int ans = 0, p = 0, a = 0, b = 0;
  for (char c : s) {
    p += c2i(c);
    if (p / 10 == (p - c2i(c)) / 10) continue;
    if (p / 10 > 4) a = 1;
    else if (p / 10 == 4) b = 1;
    else ans += p / 10;
    if (a || b) break;
  }

  cout << ans;
  if (a) cout << "(09)";
  else if (b) cout << "(weapon)";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}