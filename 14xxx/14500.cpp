#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    // STRAIGHT
    if (i+3 < n) ans = max(ans, v[i][j] + v[i+1][j] + v[i+2][j] + v[i+3][j]);
    if (j+3 < m) ans = max(ans, v[i][j] + v[i][j+1] + v[i][j+2] + v[i][j+3]);

    // SQUARE
    if (i+1 < n && j+1 < m) ans = max(ans, v[i][j] + v[i][j+1] + v[i+1][j] + v[i+1][j+1]);

    // T
    if (i+1 < n && j+2 < m) ans = max(ans, v[i][j] + v[i][j+1] + v[i][j+2] + v[i+1][j+1]);
    if (i+1 < n && j+2 < m) ans = max(ans, v[i+1][j] + v[i+1][j+1] + v[i+1][j+2] + v[i][j+1]);
    if (i+2 < n && j+1 < m) ans = max(ans, v[i][j] + v[i+1][j] + v[i+2][j] + v[i+1][j+1]);
    if (i+2 < n && j+1 < m) ans = max(ans, v[i][j+1] + v[i+1][j+1] + v[i+2][j+1] + v[i+1][j]);

    // L
    if (i+1 < n && j+2 < m) ans = max(ans, v[i][j] + v[i+1][j] + v[i][j+1] + v[i][j+2]);
    if (i+1 < n && j+2 < m) ans = max(ans, v[i][j] + v[i][j+1] + v[i][j+2] + v[i+1][j+2]);
    if (i+1 < n && j+2 < m) ans = max(ans, v[i][j] + v[i+1][j] + v[i+1][j+1] + v[i+1][j+2]);
    if (i+1 < n && j+2 < m) ans = max(ans, v[i+1][j] + v[i+1][j+1] + v[i+1][j+2] + v[i][j+2]);
    if (i+2 < n && j+1 < m) ans = max(ans, v[i][j] + v[i][j+1] + v[i+1][j+1] + v[i+2][j+1]);
    if (i+2 < n && j+1 < m) ans = max(ans, v[i][j] + v[i][j+1] + v[i+1][j] + v[i+2][j]);
    if (i+2 < n && j+1 < m) ans = max(ans, v[i][j] + v[i+1][j] + v[i+2][j] + v[i+2][j+1]);
    if (i+2 < n && j+1 < m) ans = max(ans, v[i][j+1] + v[i+1][j+1] + v[i+2][j+1] + v[i+2][j]);

    // S
    if (i+2 < n && j+1 < m) ans = max(ans, v[i][j] + v[i+1][j] + v[i+1][j+1] + v[i+2][j+1]);
    if (i+2 < n && j+1 < m) ans = max(ans, v[i][j+1] + v[i+1][j+1] + v[i+1][j] + v[i+2][j]);
    if (i+1 < n && j+2 < m) ans = max(ans, v[i][j] + v[i][j+1] + v[i+1][j+1] + v[i+1][j+2]);
    if (i+1 < n && j+2 < m) ans = max(ans, v[i][j+2] + v[i][j+1] + v[i+1][j+1] + v[i+1][j]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}