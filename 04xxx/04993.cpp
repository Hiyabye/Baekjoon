#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int w, int h, vector<vector<char>> &v, int y, int x) {
  v[y][x] = '#';
  int ret = 1;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= h || nx < 0 || nx >= w || v[ny][nx] == '#') continue;
    ret += dfs(w, h, v, ny, nx);
  }
  return ret;
}

bool solve(void) {
  int w, h; cin >> w >> h;
  if (w == 0 && h == 0) return false;
  vector<vector<char>> v(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> v[i][j];

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (v[i][j] == '@') {
        cout << dfs(w, h, v, i, j) << "\n";
        break;
      }
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}