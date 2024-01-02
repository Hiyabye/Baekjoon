#include <iostream>
#include <vector>
using namespace std;

int m, n;
vector<vector<int> > a, dp;
vector<vector<bool> > visited;

int dfs(int x, int y) {
  if (x == m-1 && y == n-1) return 1;
  if (visited[x][y]) return dp[x][y];
  visited[x][y] = true;

  if (x > 0 && a[x-1][y] < a[x][y]) dp[x][y] += dfs(x-1, y);
  if (x < m-1 && a[x+1][y] < a[x][y]) dp[x][y] += dfs(x+1, y);
  if (y > 0 && a[x][y-1] < a[x][y]) dp[x][y] += dfs(x, y-1);
  if (y < n-1 && a[x][y+1] < a[x][y]) dp[x][y] += dfs(x, y+1);
  return dp[x][y];
}

void solve(void) {
  cin >> m >> n;
  a.resize(m, vector<int>(n));
  dp.resize(m, vector<int>(n, 0));
  visited.resize(m, vector<bool>(n, false));
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
    }
  }

  cout << dfs(0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}