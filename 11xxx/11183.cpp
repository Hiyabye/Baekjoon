#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int n, int m, vector<vector<char>> &v, int y, int x) {
  int ret = 0;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || v[ny][nx] == '2') continue;
    if (v[ny][nx] == '0') v[ny][nx] = '2', ret += dfs(n, m, v, ny, nx);
    if (v[ny][nx] == '1') ret++;
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n+2, vector<char>(m+2, '0'));
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) cin >> v[i][j];

  cout << dfs(n+2, m+2, v, 0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}