#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, l, r, x; cin >> n >> l >> r >> x;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int mask=0; mask<(1<<n); mask++) {
    int sum = 0, mn = 1e9, mx = 0;
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) {
        sum += a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
      }
    }
    if (l <= sum && sum <= r && mx - mn >= x) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}