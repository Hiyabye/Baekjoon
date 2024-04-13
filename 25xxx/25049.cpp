#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  vector<vector<long long>> dp(4, vector<long long>(n));
  dp[0][0] = dp[1][0] = p[0]; dp[2][n-1] = dp[3][n-1] = p[n-1];
  for (int i=1; i<=n-1; i++) dp[0][i] = max(0LL, dp[0][i-1]) + p[i];
  for (int i=1; i<=n-1; i++) dp[1][i] = max(dp[1][i-1], dp[0][i]);
  for (int i=n-2; i>=0; i--) dp[2][i] = max(0LL, dp[2][i+1]) + p[i];
  for (int i=n-2; i>=0; i--) dp[3][i] = max(dp[3][i+1], dp[2][i]);

  long long ans = max(0LL, dp[1][n-1]);
  for (int i=1; i<=n-1; i++) ans = max(ans, dp[1][i-1] + dp[3][i]);
  ans += accumulate(p.begin(), p.end(), 0LL);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}