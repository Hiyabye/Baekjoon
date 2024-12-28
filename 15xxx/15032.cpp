#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<vector<double>> dp(k+1, vector<double>(n+1, 0.0));
  
  for (int i=0; i<=n; i++) dp[0][i] = n-i;
  for (int i=1; i<=k; i++) {
    dp[i][0] = (dp[i-1][0] + dp[i-1][1]) / 2;
    for (int j=1; j<=n; j++) {
      dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) / 2;
    }
  }
  cout << fixed << setprecision(7) << dp[k][n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}