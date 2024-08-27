#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dy[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dx[8] = {1, 0, -1, 1, -1, 1, 0, -1};

int bfs(int n, int m, const vector<vector<int>> &v, int y, int x) {
  vector<vector<int>> dist(n, vector<int>(m, -1)); dist[y][x] = 0;
  queue<pair<int, int>> q; q.push({y, x});
  while (!q.empty()) {
    auto [y, x] = q.front(); q.pop();
    if (v[y][x]) return dist[y][x];
    for (int i=0; i<8; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= n || nx < 0 || nx >= m || dist[ny][nx] != -1) continue;
      dist[ny][nx] = dist[y][x] + 1;
      q.push({ny, nx});
    }
  }
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (!v[i][j]) ans = max(ans, bfs(n, m, v, i, j));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}