#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  if ((n*(n+1)/2) & 1) return 0;

  vector<vector<int>> dp(n*(n+1)/4+1, vector<int>(n+1, 0));
  for (int i=1; i<=n; i++) dp[0][i] = 1;
  for (int i=1; i<=n*(n+1)/4; i++) {
    for (int j=1; j<=n; j++) {
      dp[i][j] = dp[i][j-1] + (i >= j ? dp[i-j][j-1] : 0);
    }
  }
  return dp[n*(n+1)/4][n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}