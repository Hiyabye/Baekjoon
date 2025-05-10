#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

inline bool valid(int n, int m, int x, int y) {
  return 1 <= x && x <= n && 1 <= y && y <= m;
}

void solve(void) {
  int n, m; cin >> n >> m;
  int k; cin >> k;
  vector<vector<bool>> v(n+2, vector<bool>(m+2, false));
  while (k--) {
    int x, y; cin >> x >> y;
    v[x][y] = true;
  }

  vector<vector<int>> dp(n+2, vector<int>(m+2, 0));
  for (int i=1; i<=n; i++) {
    if (v[i][1]) break;
    dp[i][1] = 1;
  }
  for (int j=2; j<=m; j++) for (int i=1; i<=n; i++) {
    if (v[i][j]) continue;
    if (valid(n, m, i-1, j) && !v[i-1][j]) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
    if (valid(n, m, i, j-1) && !v[i][j-1]) dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
    if (j & 1) {
      if (valid(n, m, i-1, j-1) && !v[i-1][j-1]) dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
    } else {
      if (valid(n, m, i+1, j-1) && !v[i+1][j-1]) dp[i][j] = (dp[i][j] + dp[i+1][j-1]) % MOD;
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