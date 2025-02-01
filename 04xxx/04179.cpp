#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> maze(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> maze[i][j];

  vector<vector<int>> fire(r, vector<int>(c, 1e9));
  queue<pair<int, int>> q;
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (maze[i][j] != 'F') continue;
    fire[i][j] = 0; q.push({i, j});
  }

  while (!q.empty()) {
    auto [x, y] = q.front(); q.pop();
    for (int i=0; i<4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= r || ny < 0 || ny >= c || maze[nx][ny] == '#') continue;
      if (fire[nx][ny] <= fire[x][y] + 1) continue;
      fire[nx][ny] = fire[x][y] + 1;
      q.push({nx, ny});
    }
  }

  vector<vector<bool>> visited(r, vector<bool>(c, false));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (maze[i][j] != 'J') continue;
    visited[i][j] = true; q.push({i, j});
  }

  int ans = 0;
  while (!q.empty()) {
    ans++;
    int q_size = q.size();
    while (q_size--) {
      auto [x, y] = q.front(); q.pop();
      if (x == 0 || x == r-1 || y == 0 || y == c-1) {
        cout << ans;
        return;
      }
      for (int i=0; i<4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= r || ny < 0 || ny >= c || maze[nx][ny] == '#' || visited[nx][ny]) continue;
        if (fire[nx][ny] <= ans) continue;
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
  cout << "IMPOSSIBLE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}