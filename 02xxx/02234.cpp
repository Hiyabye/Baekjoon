#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};

int n, m;
vector<vector<int>> a;
vector<vector<bool>> visited;

inline int calc(int x, int y) {
  if (x < 0 || x >= m || y < 0 || y >= n || visited[x][y]) return 0;
  visited[x][y] = true;
  int ret = 1;
  for (int i=0; i<4; i++) {
    if (a[x][y] & (1 << i)) continue;
    ret += calc(x+dx[i], y+dy[i]);
  }
  return ret;
}

void solve(void) {
  cin >> n >> m;
  a.resize(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  int cnt = 0, mx = 0, ans = 0;
  visited.resize(m, vector<bool>(n, false));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    if (visited[i][j]) continue;
    cnt++; mx = max(mx, calc(i, j));
  }

  for (int i=0; i<m; i++) for (int j=0; j<n; j++) for (int k=0; k<4; k++) {
    if (a[i][j] & (1 << k)) {
      a[i][j] -= (1 << k);
      visited.assign(m, vector<bool>(n, false));
      ans = max(ans, calc(i, j));
      a[i][j] += (1 << k);
    }
  }
  cout << cnt << "\n" << mx << "\n" << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}