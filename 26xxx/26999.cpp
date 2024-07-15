#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int h, int w, vector<vector<char>> &v, int y, int x) {
  int ret = 1;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= h || nx < 0 || nx >= w || v[ny][nx] == '.') continue;
    v[ny][nx] = '.';
    ret += dfs(h, w, v, ny, nx);
  }
  return ret;
}

void solve(void) {
  int w, h; cin >> w >> h;
  vector<vector<char>> v(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (v[i][j] == '.') continue;
    v[i][j] = '.';
    ans = max(ans, dfs(h, w, v, i, j));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}