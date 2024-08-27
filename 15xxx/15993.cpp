#include <iostream>
#include <vector>
#define MOD 1000000009
using namespace std;

vector<vector<long long>> precompute(void) {
  vector<vector<long long>> dp(100001, vector<long long>(2, 0));
  dp[0][1] = dp[1][0] = dp[2][0] = dp[2][1] = 1;
  for (int i=3; i<=100000; i++) {
    dp[i][0] = (dp[i-1][1] + dp[i-2][1] + dp[i-3][1]) % MOD;
    dp[i][1] = (dp[i-1][0] + dp[i-2][0] + dp[i-3][0]) % MOD;
  }
  return dp;
}

void solve(const vector<vector<long long>> &dp) {
  int n; cin >> n;

  cout << dp[n][0] << " " << dp[n][1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<long long>> dp = precompute();

  int t; cin >> t;
  while (t--) solve(dp);
  return 0;
}