#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int d; cin >> d;

  vector<vector<long long>> dp(d+1, vector<long long>(8, 0));
  dp[0][0] = 1;
  for (int i=1; i<=d; i++) {
    dp[i][0] = (dp[i-1][1] + dp[i-1][2]) % MOD;
    dp[i][1] = (dp[i-1][0] + dp[i-1][2] + dp[i-1][3]) % MOD;
    dp[i][2] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][3] + dp[i-1][4]) % MOD;
    dp[i][3] = (dp[i-1][1] + dp[i-1][2] + dp[i-1][4] + dp[i-1][5]) % MOD;
    dp[i][4] = (dp[i-1][2] + dp[i-1][3] + dp[i-1][5] + dp[i-1][6]) % MOD;
    dp[i][5] = (dp[i-1][3] + dp[i-1][4] + dp[i-1][7]) % MOD;
    dp[i][6] = (dp[i-1][4] + dp[i-1][7]) % MOD;
    dp[i][7] = (dp[i-1][5] + dp[i-1][6]) % MOD;
  }

  cout << dp[d][0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}