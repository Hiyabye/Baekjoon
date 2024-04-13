#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  for (int i=1; i<=n; i++) a[i] += a[i-1];

  if (n == 1) {
    cout << max(0LL, a[1]);
    return;
  }

  vector<vector<long long>> dp(n+1, vector<long long>(n+1, 0));
  for (int i=1; i<=n; i++) for (int j=i; j<=n; j++) {
    dp[i][j] = max(dp[i][j-1], a[j] - a[i-1]);
  }

  long long ans = 0;
  for (int i=1; i<=n-1; i++) for (int j=i; j<=n-1; j++) {
    ans = max(ans, dp[1][i-1] + dp[i][j] + dp[j+1][n]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}