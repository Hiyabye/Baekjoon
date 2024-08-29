#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

inline void toggle(int n, vector<vector<bool>> &v, int y, int x) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
    v[ny][nx] = !v[ny][nx];
  }
  v[y][x] = !v[y][x];
}

inline bool check(int n, const vector<vector<bool>> &v) {
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<bool>> a(n, vector<bool>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    int x; cin >> x;
    a[i][j] = (x == 1);
  }

  int ans = 1e9;
  for (int mask=0; mask<(1<<n); mask++) {
    vector<vector<bool>> b = a;
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) toggle(n, b, 0, i);
    }
    int cnt = __builtin_popcount(mask);
    for (int i=1; i<n; i++) for (int j=0; j<n; j++) {
      if (!b[i-1][j]) continue;
      toggle(n, b, i, j); cnt++;
    }
    if (check(n, b)) ans = min(ans, cnt);
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}