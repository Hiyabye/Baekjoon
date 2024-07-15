#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int n, m, k;
vector<vector<int>> a;
vector<vector<bool>> b;

void dfs(int y, int x) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || b[ny][nx]) continue;
    if (abs(a[ny][nx] - a[y][x]) > k) continue;
    b[ny][nx] = true;
    dfs(ny, nx);
  }
}

void solve(void) {
  cin >> n >> m >> k;
  a.resize(n, vector<int>(m)); b.resize(n, vector<bool>(m, false));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (b[i][j]) continue;
    b[i][j] = true;
    dfs(i, j);
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