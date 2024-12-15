#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<vector<long long>> dp(n+2, vector<long long>(3, 0));
  dp[2][1] = dp[2][2] = 1;
  
  for (int i=3; i<=n; i++) {
    dp[i][0] = (dp[i-1][1] + dp[i-1][2]) % MOD;
    dp[i][1] = (dp[i-1][2] + dp[i-1][0]) % MOD;
    dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % MOD;
  }
  cout << dp[n][1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}