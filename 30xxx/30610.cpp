#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int n, int m, vector<vector<char>> &v, int y, int x) {
  int ret = 1;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || v[ny][nx] != '1') continue;
    v[ny][nx] = '0';
    ret += dfs(n, m, v, ny, nx);
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  vector<int> ans;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (v[i][j] != '1') continue;
    v[i][j] = '0';
    ans.push_back(dfs(n, m, v, i, j));
  }
  sort(ans.begin(), ans.end());

  cout << ans.size() << "\n";
  for (int x : ans) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}