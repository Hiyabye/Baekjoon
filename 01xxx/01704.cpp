#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

inline bool compare(int n, int prev, int cur) {
  for (int i=0; i<n; i++) {
    int a = prev & 1, b = cur & 1;
    if (a ^ b) return a < b;
    prev >>= 1; cur >>= 1;
  }
  return true;
}

inline void toggle(int m, int n, vector<vector<bool>> &v, int y, int x) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
    v[ny][nx] = !v[ny][nx];
  }
  v[y][x] = !v[y][x];
}

inline bool check(int m, int n, const vector<vector<bool>> &v) {
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    if (v[i][j]) return false;
  }
  return true;
}

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<bool>> a(m, vector<bool>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    int x; cin >> x;
    a[i][j] = (x == 1);
  }

  int mn = 1e9, idx = (1<<(n+1))-1;
  for (int mask=0; mask<(1<<n); mask++) {
    vector<vector<bool>> b = a;
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) toggle(m, n, b, 0, i);
    }
    int cnt = __builtin_popcount(mask);
    for (int i=1; i<m; i++) for (int j=0; j<n; j++) {
      if (!b[i-1][j]) continue;
      toggle(m, n, b, i, j); cnt++;
    }
    if (!check(m, n, b) || cnt > mn) continue;
    if (cnt == mn && compare(n, idx, mask)) continue;
    mn = cnt; idx = mask;
  }

  if (mn == 1e9) {
    cout << "IMPOSSIBLE";
    return;
  }

  vector<vector<bool>> ans(m, vector<bool>(n, false));
  for (int i=0; i<n; i++) {
    if (idx & (1 << i)) {
      toggle(m, n, a, 0, i);
      ans[0][i] = true;
    }
  }
  for (int i=1; i<m; i++) for (int j=0; j<n; j++) {
    if (!a[i-1][j]) continue;
    toggle(m, n, a, i, j);
    ans[i][j] = true;
  }

  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}