#include <iostream>
using namespace std;

void solve(void) {
  int w, n, p; cin >> w >> n >> p;

  int ans = 0;
  while (p--) {
    int h; cin >> h;
    if (w <= h && h <= n) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}