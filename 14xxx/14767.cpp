#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> p(n+1, vector<int>(m+1, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) cin >> p[i][j];

  vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=m; j++) {
      dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + p[i][j];
    }
    cout << dp[i][m] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}