#include <iostream>
#include <vector>
#define MOD 1000000009
using namespace std;

vector<vector<long long>> precompute(void) {
  vector<vector<long long>> dp(1001, vector<long long>(1001, 0));
  dp[1][1] = dp[2][1] = dp[2][2] = dp[3][1] = dp[3][3] = 1; dp[3][2] = 2;
  for (int i=4; i<=1000; i++) for (int j=2; j<=i; j++) {
    dp[i][j] = (dp[i-1][j-1] + dp[i-2][j-1] + dp[i-3][j-1]) % MOD;
  }
  for (int i=1; i<=1000; i++) for (int j=1; j<=1000; j++) {
    dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
  }
  return dp;
}

void solve(const vector<vector<long long>> &dp) {
  int n, m; cin >> n >> m;

  cout << dp[n][m] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<long long>> dp = precompute();

  int t; cin >> t;
  while (t--) solve(dp);
  return 0;
}