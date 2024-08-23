#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  vector<vector<int>> dp(n, vector<int>(m)); dp[0][0] = v[0][0];
  for (int i=1; i<n; i++) dp[i][0] = dp[i-1][0] + v[i][0];
  for (int j=1; j<m; j++) dp[0][j] = dp[0][j-1] + v[0][j];
  for (int i=1; i<n; i++) for (int j=1; j<m; j++) {
    dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + v[i][j];
  }
  cout << dp[n-1][m-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}