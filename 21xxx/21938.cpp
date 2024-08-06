#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int n, int m, vector<vector<bool>> &v, int y, int x) {
  v[y][x] = false;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || !v[ny][nx]) continue;
    dfs(n, m, v, ny, nx);
  }
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> r(n, vector<int>(m)), g(n, vector<int>(m)), b(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> r[i][j] >> g[i][j] >> b[i][j];
  int t; cin >> t;

  vector<vector<bool>> v(n, vector<bool>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    v[i][j] = r[i][j] + g[i][j] + b[i][j] >= t * 3;
  }

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (!v[i][j]) continue;
    dfs(n, m, v, i, j);
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