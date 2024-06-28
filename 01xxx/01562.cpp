#include <iostream>
#include <vector>
#define MOD 1000000000
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<vector<int> > > dp(n+1, vector<vector<int> >(10, vector<int>(1<<10, 0)));

  for (int i=1; i<=9; i++) {
    dp[1][i][1<<i] = 1;
  }
  for (int i=2; i<=n; i++) {
    for (int j=0; j<(1<<10); j++) {
      dp[i][0][j | (1<<0)] = (dp[i][0][j | (1<<0)] + dp[i-1][1][j]) % MOD;
    }
    for (int j=1; j<=8; j++) {
      for (int k=0; k<(1<<10); k++) {
        dp[i][j][k | (1<<j)] = (dp[i][j][k | (1<<j)] + dp[i-1][j-1][k]) % MOD;
        dp[i][j][k | (1<<j)] = (dp[i][j][k | (1<<j)] + dp[i-1][j+1][k]) % MOD;
      }
    }
    for (int j=0; j<(1<<10); j++) {
      dp[i][9][j | (1<<9)] = (dp[i][9][j | (1<<9)] + dp[i-1][8][j]) % MOD;
    }
  }

  int ans = 0;
  for (int i=0; i<=9; i++) {
    ans = (ans + dp[n][i][(1<<10)-1]) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}