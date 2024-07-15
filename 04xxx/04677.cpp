#include <iostream>
#include <vector>
using namespace std;

int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int m, int n, vector<vector<char>> &v, int y, int x) {
  for (int i=0; i<8; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= m || nx < 0 || nx >= n || v[ny][nx] == '*') continue;
    v[ny][nx] = '*';
    dfs(m, n, v, ny, nx);
  }
}

bool solve(void) {
  int m, n; cin >> m >> n;
  if (m == 0 && n == 0) return false;
  vector<vector<char>> v(m, vector<char>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    if (v[i][j] == '*') continue;
    v[i][j] = '*';
    dfs(m, n, v, i, j);
    ans++;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}