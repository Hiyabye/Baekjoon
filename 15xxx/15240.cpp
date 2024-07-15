#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

inline char i2c(int i) { return i + '0'; }

void dfs(int r, int c, vector<vector<char>> &v, int y, int x, int k, char p) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= r || nx < 0 || nx >= c || v[ny][nx] != p) continue;
    v[ny][nx] = i2c(k);
    dfs(r, c, v, ny, nx, k, p);
  }
  v[y][x] = i2c(k);
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];
  int y, x, k; cin >> y >> x >> k;

  if (v[y][x] != i2c(k)) dfs(r, c, v, y, x, k, v[y][x]);

  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}