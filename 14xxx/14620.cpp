#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

inline bool ok(int n, int y1, int x1, int y2, int x2, int y3, int x3) {
  vector<vector<bool>> v(n, vector<bool>(n, false));
  v[y1][x1] = v[y2][x2] = v[y3][x3] = true;
  for (int i=0; i<4; i++) {
    int ny1 = y1 + dy[i], nx1 = x1 + dx[i];
    int ny2 = y2 + dy[i], nx2 = x2 + dx[i];
    int ny3 = y3 + dy[i], nx3 = x3 + dx[i];
    v[ny1][nx1] = v[ny2][nx2] = v[ny3][nx3] = true;
  }
  int cnt = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) if (v[i][j]) cnt++;
  return cnt == 15;
}

inline int calc(int n, const vector<vector<int>> &g, int y1, int x1, int y2, int x2, int y3, int x3) {
  int ret = g[y1][x1] + g[y2][x2] + g[y3][x3];
  for (int i=0; i<4; i++) {
    int ny1 = y1 + dy[i], nx1 = x1 + dx[i];
    int ny2 = y2 + dy[i], nx2 = x2 + dx[i];
    int ny3 = y3 + dy[i], nx3 = x3 + dx[i];
    ret += g[ny1][nx1] + g[ny2][nx2] + g[ny3][nx3];
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> g(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> g[i][j];

  int ans = 1e9;
  for (int y1=1; y1<n-1; y1++) for (int x1=1; x1<n-1; x1++) {
    for (int y2=1; y2<n-1; y2++) for (int x2=1; x2<n-1; x2++) {
      for (int y3=1; y3<n-1; y3++) for (int x3=1; x3<n-1; x3++) {
        if (!ok(n, y1, x1, y2, x2, y3, x3)) continue;
        ans = min(ans, calc(n, g, y1, x1, y2, x2, y3, x3));
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}