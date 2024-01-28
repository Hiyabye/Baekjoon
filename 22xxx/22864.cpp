#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, m; cin >> a >> b >> c >> m;

  int ans = 0, tired = 0;
  for (int i=0; i<24; i++) {
    if (tired + a <= m) {
      ans += b;
      tired += a;
    } else {
      tired -= c;
      if (tired < 0) tired = 0;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}