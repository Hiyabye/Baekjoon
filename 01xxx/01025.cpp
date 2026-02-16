#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int x) {
  int s = (int)sqrt(x);
  return s * s == x;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    char c; cin >> c;
    a[i][j] = c - '0';
  }

  int ans = -1;
  for (int x=0; x<n; x++) for (int y=0; y<m; y++) {
    for (int dx=-n+1; dx<=n-1; dx++) for (int dy=-m+1; dy<=m-1; dy++) {
      if (dx == 0 && dy == 0) {
        if (check(a[x][y])) ans = max(ans, a[x][y]);
        continue;
      }
      int cur = a[x][y], nx = x + dx, ny = y + dy;
      while (0 <= nx && nx < n && 0 <= ny && ny < m) {
        cur = cur * 10 + a[nx][ny];
        if (check(cur)) ans = max(ans, cur);
        nx += dx; ny += dy;
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