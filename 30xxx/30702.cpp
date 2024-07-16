#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

bool dfs(int n, int m, vector<vector<char>> &a, vector<vector<char>> &b, int y, int x, char c) {
  a[y][x] = '.';
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] != c) continue;
    if (b[y][x] != b[ny][nx]) return false;
    if (!dfs(n, m, a, b, ny, nx, c)) return false;
  }
  return true;
}

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> a(n, vector<char>(m)), b(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> b[i][j];

  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (a[i][j] == '.') continue;
    if (!dfs(n, m, a, b, i, j, a[i][j])) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}