#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  for (int i=1; i<=n; i++) a[i] += a[i-1];

  int ans = 0, prev = 0;
  for (int i=m; i<=n; i++) {
    prev = min(prev, a[i-m]);
    ans = max(ans, a[i] - prev);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}