#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int n, int m, vector<vector<bool>> &v, int y, int x) {
  int ret = 1;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || !v[ny][nx]) continue;
    v[ny][nx] = false;
    ret += dfs(n, m, v, ny, nx);
  }
  return ret;
}

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<vector<bool>> v(n, vector<bool>(m, false));
  while (k--) {
    int r, c; cin >> r >> c; r--; c--;
    v[r][c] = true;
  }

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (!v[i][j]) continue;
    v[i][j] = false;
    ans = max(ans, dfs(n, m, v, i, j));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}