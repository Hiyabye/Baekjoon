#include <iostream>
#include <vector>
using namespace std;

int dy[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dx[8] = {1, 0, -1, 1, -1, 1, 0, -1};

void dfs(int r, int c, vector<vector<int>> &v, int y, int x) {
  v[y][x] = 0;
  for (int i=0; i<8; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
    if (v[ny][nx]) dfs(r, c, v, ny, nx);
  }
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<int>> v(r, vector<int>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (!v[i][j]) continue;
    dfs(r, c, v, i, j);
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}