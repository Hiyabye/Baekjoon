#include <algorithm>
#include <iostream>
using namespace std;

bool solve(void) {
  int n, H; cin >> n >> H;

  long long ans = 0;
  while (n--) {
    int l, w, h; cin >> l >> w >> h;
    int mn = 2e9;
    if (l <= H) mn = min({mn, w, h});
    if (w <= H) mn = min({mn, l, h});
    if (h <= H) mn = min({mn, l, w});
    if (mn == 2e9) return false;
    else ans += mn;
  }
  cout << ans;

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "" : "impossible");
  return 0;
}