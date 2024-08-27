#include <iostream>
#include <vector>
using namespace std;

bool dfs(int n, int m, vector<vector<int>> &v, int y, int x) {
  if (y == m-1 && x == n-1) return true;
  if (y < 0 || y >= m || x < 0 || x >= n || v[y][x] == 0) return false;
  v[y][x] = 0;
  return dfs(n, m, v, y+1, x) || dfs(n, m, v, y, x+1);
}

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  return dfs(n, m, v, 0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}