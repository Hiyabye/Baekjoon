#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n+1, vector<int>(n+1));
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) cin >> v[i][j];
  int r, c; cin >> r >> c;

  vector<vector<int>> dp1(n+1, vector<int>(n+1, 0));
  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) {
    dp1[i][j] = max(dp1[i-1][j], dp1[i][j-1]) + v[i][j];
  }
  for (int i=r; i<=n; i++) for (int j=c; j<=n; j++) {
    dp1[i][j] = max(dp1[i-1][j], dp1[i][j-1]) + v[i][j];
  }
  cout << dp1[n][n] << " ";

  vector<vector<int>> dp2(n+1, vector<int>(n+1, 0)); v[r][c] = -1e9;
  for (int i=1; i<=n; i++) dp2[i][1] = dp2[i-1][1] + v[i][1];
  for (int i=1; i<=n; i++) dp2[1][i] = dp2[1][i-1] + v[1][i];
  for (int i=2; i<=n; i++) for (int j=2; j<=n; j++) {
    dp2[i][j] = max(dp2[i-1][j], dp2[i][j-1]) + v[i][j];
  }
  cout << dp2[n][n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}