#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

inline bool within(int x, int y, int n) {
  return 0 <= x && x < n && 0 <= y && y < n;
}

inline bool check(int n, const vector<vector<vector<bool>>> &g, int ax, int ay, int bx, int by) {
  queue<int> qx, qy;
  vector<vector<bool>> visited(n, vector<bool>(n, false));
  qx.push(ax); qy.push(ay); visited[ax][ay] = true;
  while (!qx.empty()) {
    int cx = qx.front(); qx.pop();
    int cy = qy.front(); qy.pop();
    if (cx == bx && cy == by) return true;
    for (int d=0; d<4; d++) {
      int nx = cx + dx[d], ny = cy + dy[d];
      if (!g[cx][cy][d] || !within(nx, ny, n) || visited[nx][ny]) continue;
      visited[nx][ny] = true;
      qx.push(nx); qy.push(ny);
    }
  }
  return false;
}

void solve(void) {
  int n, k, r; cin >> n >> k >> r;
  vector<vector<vector<bool>>> g(n, vector<vector<bool>>(n, vector<bool>(4, true)));
  while (r--) {
    int a, b, c, d; cin >> a >> b >> c >> d; a--; b--; c--; d--;
    if (a == c) {
      if (b > d) swap(a, c), swap(b, d);
      g[a][b][1] = g[c][d][3] = false;
    } else {
      if (a > c) swap(a, c), swap(b, d);
      g[a][b][2] = g[c][d][0] = false;
    }
  }

  vector<int> x(k), y(k);
  for (int i=0; i<k; i++) {
    cin >> x[i] >> y[i];
    x[i]--; y[i]--;
  }

  int ans = k * (k-1) / 2;
  for (int i=0; i<k-1; i++) for (int j=i+1; j<k; j++) {
    if (check(n, g, x[i], y[i], x[j], y[j])) ans--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}