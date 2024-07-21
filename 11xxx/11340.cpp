#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  int ans = (9000 - a * 15 - b * 20 - c * 25 + 39) / 40;
  if (ans > 100) cout << "impossible\n";
  else           cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}