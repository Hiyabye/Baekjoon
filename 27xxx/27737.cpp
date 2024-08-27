#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

bool check(int n, const vector<vector<int>> &v) {
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (!v[i][j]) return false;
  }
  return true;
}

int dfs(int n, vector<vector<int>> &v, int y, int x) {
  v[y][x] = 1;
  int ret = 1;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= n || v[ny][nx]) continue;
    ret += dfs(n, v, ny, nx);
  }
  return ret;
}

bool solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];
  if (check(n, v)) return false;

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j]) continue;
    int x = dfs(n, v, i, j);
    m -= (x + k - 1) / k;
    if (m < 0) return false;
  }
  cout << "POSSIBLE\n" << m;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "" : "IMPOSSIBLE");
  return 0;
}