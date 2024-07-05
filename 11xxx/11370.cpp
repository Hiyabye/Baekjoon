#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

bool solve(void) {
  int w, h; cin >> w >> h;
  if (w == 0 && h == 0) return false;
  vector<vector<char>> v(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> v[i][j];

  queue<pair<int, int>> q;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (v[i][j] == 'S') q.push({i, j});
  }

  while (!q.empty()) {
    auto [y, x] = q.front(); q.pop();
    for (int i=0; i<4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      if (v[ny][nx] == 'T') {
        v[ny][nx] = 'S';
        q.push({ny, nx});
      }
    }
  }

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) cout << v[i][j];
    cout << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}