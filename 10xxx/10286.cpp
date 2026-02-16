#include <iostream>
using namespace std;

void solve(void) {
  int h; cin >> h;

  int ans = (h < 5) ? 36 : (h + 5) / 10;
  if (ans > 18) ans -= 18;

  cout << (ans < 10 ? "0" : "") << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}