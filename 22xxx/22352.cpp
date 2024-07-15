#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int n, int m, vector<vector<int>> &v, int y, int x, int k, int p) {
  v[y][x] = k;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || v[ny][nx] != p) continue;
    dfs(n, m, v, ny, nx, k, p);
  }
}

void search(int n, int m, vector<vector<int>> &a, vector<vector<int>> &b) {
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (a[i][j] == b[i][j]) continue;
      dfs(n, m, a, i, j, b[i][j], a[i][j]);
      return;
    }
  }
}

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> b[i][j];

  search(n, m, a, b);

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (a[i][j] != b[i][j]) return false;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}