#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int r, int c, vector<vector<char>> &v, int y, int x) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= r || nx < 0 || nx >= c || v[ny][nx] == '.') continue;
    v[ny][nx] = '.';
    dfs(r, c, v, ny, nx);
  }
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (v[i][j] == '.') continue;
    v[i][j] = '.';
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