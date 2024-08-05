#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};

struct State {
  int y, x, d;
};

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<int>> b(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> b[i][j];
  State s; cin >> s.y >> s.x >> s.d; s.y--; s.x--; s.d--;
  State e; cin >> e.y >> e.x >> e.d; e.y--; e.x--; e.d--;

  vector<vector<vector<bool>>> v(m, vector<vector<bool>>(n, vector<bool>(4, false)));
  queue<pair<State, int>> q; q.push({s, 0});

  while (!q.empty()) {
    auto [f, g] = q.front(); q.pop();
    if (f.y == e.y && f.x == e.x && f.d == e.d) {
      cout << g;
      return;
    }

    for (int k=1; k<=3; k++) {
      int ny = f.y + dy[f.d] * k, nx = f.x + dx[f.d] * k;
      if (ny < 0 || ny >= m || nx < 0 || nx >= n || b[ny][nx]) break;
      if (v[ny][nx][f.d]) continue;
      v[ny][nx][f.d] = true;
      q.push({{ny, nx, f.d}, g+1});
    }
    if (f.d < 2) {
      if (!v[f.y][f.x][2]) v[f.y][f.x][2] = true, q.push({{f.y, f.x, 2}, g+1});
      if (!v[f.y][f.x][3]) v[f.y][f.x][3] = true, q.push({{f.y, f.x, 3}, g+1});
    } else {
      if (!v[f.y][f.x][0]) v[f.y][f.x][0] = true, q.push({{f.y, f.x, 0}, g+1});
      if (!v[f.y][f.x][1]) v[f.y][f.x][1] = true, q.push({{f.y, f.x, 1}, g+1});
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}