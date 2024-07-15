#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int m, int n, vector<vector<char>> &v, int y, int x) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= m || nx < 0 || nx >= n || v[ny][nx] != '0') continue;
    v[ny][nx] = '2';
    dfs(m, n, v, ny, nx);
  }
}

bool solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<char>> v(m, vector<char>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    if (v[0][i] != '0') continue;
    v[0][i] = '2';
    dfs(m, n, v, 0, i);
  }

  for (int i=0; i<n; i++) {
    if (v[m-1][i] == '2') return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}