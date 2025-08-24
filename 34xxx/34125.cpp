#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, int m, const vector<vector<int>> &v) {
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) {
    if (!v[i][j]) return false;
  }
  return true;
}

inline int calc(int m, int r, int c) {
  return r + abs((m+1)/2-c);
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n+1, vector<int>(m+1));
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) cin >> v[i][j];
  if (check(n, m, v)) {
    cout << -1;
    return;
  }

  int x = 0, y = 0;
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) {
    if (v[i][j]) continue;
    else if (x == 0 && y == 0) x = i, y = j;
    else if (calc(m, i, j) < calc(m, x, y)) x = i, y = j;
  }
  cout << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}