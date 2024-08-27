#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

void solve(void) {
  int n, m; cin >> n >> m;
  int x, y; cin >> x >> y; x--, y--;
  vector<int> a(m), b(m);
  for (int i=0; i<m; i++) cin >> a[i] >> b[i], a[i]--, b[i]--;

  queue<pair<int, int>> q;
  vector<vector<int>> dist(n, vector<int>(n, -1));
  q.push({x, y}); dist[x][y] = 0;

  while (!q.empty()) {
    auto [cx, cy] = q.front(); q.pop();
    for (int i=0; i<8; i++) {
      int nx = cx + dx[i], ny = cy + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n || dist[nx][ny] != -1) continue;
      q.push({nx, ny});
      dist[nx][ny] = dist[cx][cy] + 1;
    }
  }

  for (int i=0; i<m; i++) {
    cout << dist[a[i]][b[i]] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}