#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n+1, 0);
  for (int i=1; i<=n; i++) cin >> v[i];
  for (int i=1; i<=n; i++) v[i] += v[i-1];
  int m; cin >> m;

  vector<vector<int>> dp(4, vector<int>(n+1, 0));
  for (int i=1; i<=3; i++) for (int j=i*m; j<=n; j++) {
    dp[i][j] = max(dp[i][j-1], dp[i-1][j-m] + v[j] - v[j-m]);
  }
  cout << dp[3][n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}