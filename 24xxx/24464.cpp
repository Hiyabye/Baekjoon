#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<vector<long long> > dp(n+1, vector<long long>(5, 1));
  for (int i=2; i<=n; i++) {
    dp[i][0] = (dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][4]) % MOD;
    dp[i][1] = (dp[i-1][0] + dp[i-1][3] + dp[i-1][4]) % MOD;
    dp[i][2] = (dp[i-1][0] + dp[i-1][4]) % MOD;
    dp[i][3] = (dp[i-1][0] + dp[i-1][1]) % MOD;
    dp[i][4] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % MOD;
  }
  cout << (dp[n][0] + dp[n][1] + dp[n][2] + dp[n][3] + dp[n][4]) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}