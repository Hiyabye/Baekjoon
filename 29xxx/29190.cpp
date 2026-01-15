#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  int x, y; cin >> x >> y;
  int k; cin >> k;

  int ans = 0;
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) {
    int a = abs(i - x), b = abs(j - y);
    if (0 < a + b && a + b <= k) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}