#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n+1, vector<int>(n+1, 1));
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) cin >> v[i][j];

  // 0: right 1: diagonal 2: down
  vector<vector<vector<long long>>> dp(3, vector<vector<long long>>(n+1, vector<long long>(n+1, 0))); dp[0][1][2] = 1;
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    if (v[i][j]) continue;
    dp[0][i][j] += dp[0][i][j-1] + dp[1][i][j-1];
    if (!v[i-1][j] && !v[i][j-1] && !v[i-1][j-1]) {
        dp[1][i][j] += dp[0][i-1][j-1] + dp[1][i-1][j-1] + dp[2][i-1][j-1];
    }
    dp[2][i][j] += dp[1][i-1][j] + dp[2][i-1][j];
  }
  cout << dp[0][n][n] + dp[1][n][n] + dp[2][n][n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();
  return 0;
}