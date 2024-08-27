#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> a(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  queue<pair<int, int>> q;
  vector<vector<int>> dist(n, vector<int>(m, -1));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (a[i][j] == '2') {
      q.push({i, j});
      dist[i][j] = 0;
    }
  }

  while (!q.empty()) {
    auto [y, x] = q.front(); q.pop();
    if (a[y][x] > '2') {
      cout << "TAK\n" << dist[y][x];
      return;
    }
    for (int i=0; i<4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == '1') continue;
      if (dist[ny][nx] != -1) continue;
      q.push({ny, nx});
      dist[ny][nx] = dist[y][x] + 1;
    }
  }
  cout << "NIE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}