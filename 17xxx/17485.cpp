#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];
  
  vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(3, 1e9)));
  for (int i=0; i<m; i++) for (int j=0; j<3; j++) dp[0][i][j] = v[0][i];
  for (int i=1; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (j+1 < m) dp[i][j][0] = min(dp[i-1][j+1][1], dp[i-1][j+1][2]) + v[i][j];
      dp[i][j][1] = min(dp[i-1][j][0], dp[i-1][j][2]) + v[i][j];
      if (j-1 >= 0) dp[i][j][2] = min(dp[i-1][j-1][0], dp[i-1][j-1][1]) + v[i][j];
    }
  }

  int ans = 1e9;
  for (int i=0; i<m; i++) for (int j=0; j<3; j++) ans = min(ans, dp[n-1][i][j]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}