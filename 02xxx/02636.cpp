#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

inline int cnt(int n, int m, const vector<vector<int>> &v) {
  int ret = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    ret += v[i][j];
  }
  return ret;
}

inline void melt(int n, int m, vector<vector<int>> &v) {
  queue<pair<int, int>> q; q.push({0, 0});
  vector<vector<bool>> visited(n, vector<bool>(m, false)); visited[0][0] = true;
  while (!q.empty()) {
    auto [x, y] = q.front(); q.pop();
    for (int i=0; i<4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited[nx][ny]) continue;
      visited[nx][ny] = true;
      if (v[nx][ny] == 1) v[nx][ny] = 2;
      else if (v[nx][ny] == 0) q.push({nx, ny});
    }
  }
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (v[i][j] == 2) v[i][j] = 0;
  }
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int a = 0, b;
  while (cnt(n, m, v)) {
    a++;
    b = cnt(n, m, v);
    melt(n, m, v);
  }
  cout << a << "\n" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}