#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  int ans = (x2 - x1) * (y2 - y1);
  if (min(x2, x4) > max(x1, x3) && min(y2, y4) > max(y1, y3)) {
    ans -= (min(x2, x4) - max(x1, x3)) * (min(y2, y4) - max(y1, y3));
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}