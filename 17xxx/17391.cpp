#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  vector<vector<int>> dp(n, vector<int>(m, 1e9)); dp[0][0] = 0;
  queue<pair<int, int>> q; q.push({0, 0});
  while (!q.empty()) {
    auto [y, x] = q.front(); q.pop();
    if (y == n-1 && x == m-1) break;
    for (int dy=1; dy<=a[y][x] && y+dy<n; dy++) {
      int ny = y + dy, nx = x;
      if (dp[ny][nx] <= dp[y][x] + 1) continue;
      dp[ny][nx] = dp[y][x] + 1;
      q.push({ny, nx});
    }
    for (int dx=1; dx<=a[y][x] && x+dx<m; dx++) {
      int ny = y, nx = x + dx;
      if (dp[ny][nx] <= dp[y][x] + 1) continue;
      dp[ny][nx] = dp[y][x] + 1;
      q.push({ny, nx});
    }
  }
  cout << dp[n-1][m-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}