#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;

  vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
  for (int i=1; i<=m; i++) dp[1][i] = 1;
  for (int i=2; i<=n; i++) for (int j=i; j<=m; j++) for (int k=1; k<j; k++) {
    dp[i][j] += dp[i-1][k];
  }
  cout << dp[n][m];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}