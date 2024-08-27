#include <iostream>
#include <vector>
#define MOD 1234567
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<vector<int>> dp(n, vector<int>(10, 1));
  for (int i=1; i<n; i++) {
    dp[i][0] = dp[i-1][7];
    dp[i][1] = (dp[i-1][2] + dp[i-1][4]) % MOD;
    dp[i][2] = (dp[i-1][1] + dp[i-1][3] + dp[i-1][5]) % MOD;
    dp[i][3] = (dp[i-1][2] + dp[i-1][6]) % MOD;
    dp[i][4] = (dp[i-1][1] + dp[i-1][5] + dp[i-1][7]) % MOD;
    dp[i][5] = (dp[i-1][2] + dp[i-1][4] + dp[i-1][6] + dp[i-1][8]) % MOD;
    dp[i][6] = (dp[i-1][3] + dp[i-1][5] + dp[i-1][9]) % MOD;
    dp[i][7] = (dp[i-1][0] + dp[i-1][4] + dp[i-1][8]) % MOD;
    dp[i][8] = (dp[i-1][5] + dp[i-1][7] + dp[i-1][9]) % MOD;
    dp[i][9] = (dp[i-1][6] + dp[i-1][8]) % MOD;
  }

  int ans = 0;
  for (int i=0; i<10; i++) {
    ans = (ans + dp[n-1][i]) % MOD;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}