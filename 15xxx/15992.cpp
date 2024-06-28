#include <iostream>
#include <vector>
#define MOD 1000000009
using namespace std;

vector<vector<int>> precompute(void) {
  vector<vector<int>> dp(1001, vector<int>(1001));
  dp[1][1] = dp[2][1] = dp[3][1] = 1;
  for (int i=2; i<=1000; i++) {
    for (int j=1; j<=1000; j++) {
      for (int k=1; k<=3; k++) {
        if (j-k > 0) dp[j][i] += dp[j-k][i-1];
        dp[j][i] %= MOD;
      }
    }
  }
  return dp;
}

void solve(vector<vector<int>>& dp) {
  int n, m; cin >> n >> m;

  cout << dp[n][m] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<int>> dp = precompute();

  int t; cin >> t;
  while (t--) solve(dp);
  return 0;
}