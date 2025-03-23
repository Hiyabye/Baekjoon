#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<char>> d(m+1, vector<char>(n+1, '0'));
  for (int i=1; i<=m; i++) for (int j=1; j<=n; j++) cin >> d[i][j];

  vector<vector<int>> dp(m+2, vector<int>(n+1, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) {
    dp[j][i] = max({dp[j-1][i-1], dp[j][i-1], dp[j+1][i-1]}) + d[j][i] - '0';
  }

  int ans = 0;
  for (int i=1; i<=m; i++) ans = max(ans, dp[i][n-1]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}