#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<long long> a(n+1);
  for (int i=1; i<=n; i++) cin >> a[i];

  vector<long long> dp(n+1, 1e18);
  dp[0] = 0;

  for (int i=1; i<=n; i++) {
    long long big = 0, small = 1e18;
    for (int j=1; j<=m; j++) {
      if (i-j+1 <= 0) break;
      big = max(big, a[i-j+1]);
      small = min(small, a[i-j+1]);
      dp[i] = min(dp[i], dp[i-j] + k + j*(big-small));
    }
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}