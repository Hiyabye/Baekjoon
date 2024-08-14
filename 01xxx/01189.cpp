#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int r, int c, int k, vector<vector<char>> &v, int y, int x) {
  if (y == 0 && x == c-1) return k == 0;
  if (k == 0) return 0;
  
  int ret = 0;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= r || nx < 0 || nx >= c || v[ny][nx] == 'T') continue;
    v[ny][nx] = 'T';
    ret += dfs(r, c, k-1, v, ny, nx);
    v[ny][nx] = '.';
  }
  return ret;
}

void solve(void) {
  int r, c, k; cin >> r >> c >> k;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  v[r-1][0] = 'T';
  cout << dfs(r, c, k-1, v, r-1, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}