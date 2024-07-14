#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int h; cin >> h;
  int w; cin >> w;

  int ans = min(h, w);
  cout << ans / 2 << ans % 2 * 5 << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}