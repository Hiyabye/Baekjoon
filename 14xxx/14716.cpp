#include <iostream>
#include <vector>
using namespace std;

int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int m, int n, vector<vector<int>> &v, int y, int x) {
  for (int i=0; i<8; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= m || nx < 0 || nx >= n || v[ny][nx] == 0) continue;
    v[ny][nx] = 0;
    dfs(m, n, v, ny, nx);
  }
}

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<int>> v(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    if (v[i][j] == 0) continue;
    v[i][j] = 0;
    dfs(m, n, v, i, j);
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