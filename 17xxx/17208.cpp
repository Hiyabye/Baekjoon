#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(k+1, 0)));
  for (int i=1; i<=n; i++) {
    int x, y; cin >> x >> y;
    for (int j=0; j<=m; j++) {
      for (int l=0; l<=k; l++) {
        if (j >= x && l >= y) {
          dp[i][j][l] = max(dp[i-1][j][l], dp[i-1][j-x][l-y] + 1);
        } else {
          dp[i][j][l] = dp[i-1][j][l];
        }
      }
    }
  }

  int ans = 0;
  for (int i=0; i<=m; i++) {
    for (int j=0; j<=k; j++) {
      ans = max(ans, dp[n][i][j]);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}