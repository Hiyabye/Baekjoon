#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int bfs(int h, int w, vector<vector<char>> v, int y, int x) {
  vector<vector<int>> dist(h, vector<int>(w, -1)); dist[y][x] = 0;
  queue<pair<int, int>> q; q.push({y, x});

  while (!q.empty()) {
    auto [y, x] = q.front(); q.pop();
    for (int i=0; i<4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      if (v[ny][nx] == 'W' || dist[ny][nx] != -1) continue;
      dist[ny][nx] = dist[y][x] + 1;
      q.push({ny, nx});
    }
  }

  int ret = 0;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (v[i][j] == 'W') continue;
    ret = max(ret, dist[i][j]);
  }
  return ret;
}

void solve(void) {
  int h, w; cin >> h >> w;
  vector<vector<char>> v(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (v[i][j] != 'L') continue;
    ans = max(ans, bfs(h, w, v, i, j));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}