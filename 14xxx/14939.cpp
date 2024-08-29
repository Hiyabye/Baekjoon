#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

inline void toggle(vector<vector<bool>> &v, int y, int x) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= 10 || nx < 0 || nx >= 10) continue;
    v[ny][nx] = !v[ny][nx];
  }
  v[y][x] = !v[y][x];
}

inline bool check(const vector<vector<bool>> &v) {
  for (int i=0; i<10; i++) for (int j=0; j<10; j++) {
    if (v[i][j]) return false;
  }
  return true;
}

void solve(void) {
  vector<vector<bool>> a(10, vector<bool>(10));
  for (int i=0; i<10; i++) for (int j=0; j<10; j++) {
    char c; cin >> c;
    a[i][j] = (c == 'O');
  }

  int ans = 1e9;
  for (int mask=0; mask<(1<<10); mask++) {
    vector<vector<bool>> b = a;
    for (int i=0; i<10; i++) {
      if (mask & (1 << i)) toggle(b, 0, i);
    }
    int cnt = __builtin_popcount(mask);
    for (int i=1; i<10; i++) for (int j=0; j<10; j++) {
      if (!b[i-1][j]) continue;
      toggle(b, i, j); cnt++;
    }
    if (check(b)) ans = min(ans, cnt);
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}