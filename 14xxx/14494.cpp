#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;

  vector<vector<long long> > dp(n+1, vector<long long>(m+1, 0));
  dp[1][1] = 1;
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=m; j++) {
      if (i == 1 && j == 1) continue;
      dp[i][j] = (dp[i-1][j] + dp[i][j-1] + dp[i-1][j-1]) % MOD;
    }
  }
  cout << dp[n][m];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}