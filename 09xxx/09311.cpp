#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int r, c, sy, sx;
vector<vector<char>> v;
vector<vector<int>> dist;

inline bool valid(int y, int x) {
  return y >= 0 && y < r && x >= 0 && x < c;
}

void dfs(int y, int x) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (!valid(ny, nx) || v[ny][nx] == 'X' || dist[ny][nx] < dist[y][x]) continue;
    dist[ny][nx] = dist[y][x] + 1;
    dfs(ny, nx);
  }
}

void solve(void) {
  cin >> r >> c;
  v.assign(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];
  dist.assign(r, vector<int>(c, 1e9));

  vector<int> gy, gx;
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      if (v[i][j] == 'S') sy = i, sx = j;
      if (v[i][j] == 'G') gy.push_back(i), gx.push_back(j);
    }
  }
  dist[sy][sx] = 0;

  dfs(sy, sx);

  int ans = 1e9;
  for (int i=0; i<gy.size(); i++) ans = min(ans, dist[gy[i]][gx[i]]);
  if (ans == 1e9) cout << "No Exit";
  else cout << "Shortest Path: " << ans;
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}