#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n+1, 0), b(n+1, 0), c(n+1, 0), d(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
  dp[1][a[1]] = b[1]; dp[1][c[1]] = max(dp[1][c[1]], d[1]);
  for (int i=2; i<=n; i++) for (int j=0; j<=k; j++) {
    if (!dp[i-1][j]) continue;
    if (a[i]+j <= k) dp[i][a[i]+j] = max(dp[i][a[i]+j], dp[i-1][j]+b[i]);
    if (c[i]+j <= k) dp[i][c[i]+j] = max(dp[i][c[i]+j], dp[i-1][j]+d[i]);
  }
  cout << *max_element(dp[n].begin(), dp[n].end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}