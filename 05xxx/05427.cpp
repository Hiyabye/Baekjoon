#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void solve(void) {
  int w, h; cin >> w >> h;
  vector<vector<char>> maze(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> maze[i][j];

  vector<vector<int>> fire(h, vector<int>(w, 1e9));
  queue<pair<int, int>> q;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (maze[i][j] != '*') continue;
    fire[i][j] = 0; q.push({i, j});
  }

  while (!q.empty()) {
    auto [x, y] = q.front(); q.pop();
    for (int i=0; i<4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w || maze[nx][ny] == '#') continue;
      if (fire[nx][ny] <= fire[x][y] + 1) continue;
      fire[nx][ny] = fire[x][y] + 1;
      q.push({nx, ny});
    }
  }

  vector<vector<bool>> visited(h, vector<bool>(w, false));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (maze[i][j] != '@') continue;
    visited[i][j] = true; q.push({i, j});
  }

  int ans = 0;
  while (!q.empty()) {
    ans++;
    int q_size = q.size();
    while (q_size--) {
      auto [x, y] = q.front(); q.pop();
      if (x == 0 || x == h-1 || y == 0 || y == w-1) {
        cout << ans << "\n";
        return;
      }
      for (int i=0; i<4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w || maze[nx][ny] == '#' || visited[nx][ny]) continue;
        if (fire[nx][ny] <= ans) continue;
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
  cout << "IMPOSSIBLE\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}