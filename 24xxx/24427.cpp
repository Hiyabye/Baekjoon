#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n+1, vector<int>(n+1, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) cin >> v[i][j];

  int p; cin >> p;
  vector<vector<bool>> spot(n+1, vector<bool>(n+1, false));
  while (p--) {
    int r, c; cin >> r >> c;
    spot[r][c] = true;
  }

  vector<vector<int>> dp1(n+1, vector<int>(n+1, 0)), dp2(n+1, vector<int>(n+1, 0));
  for (int i=1; i<=n; i++) dp1[0][i] = dp1[0][i-1] + v[0][i];
  for (int i=1; i<=n; i++) dp1[i][0] = dp1[i-1][0] + v[i][0];
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dp1[i][j] = max(dp1[i-1][j], dp1[i][j-1]) + v[i][j];
    if (spot[i][j]) dp2[i][j] = dp1[i][j];
    else if (max(dp2[i-1][j], dp2[i][j-1])) dp2[i][j] = max(dp2[i-1][j], dp2[i][j-1]) + v[i][j];
  }
  cout << dp2[n][n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}