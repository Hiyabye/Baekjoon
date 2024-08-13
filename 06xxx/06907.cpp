#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

inline int dfs(int r, int c, vector<vector<char>> &v, int y, int x) {
  int ret = 1;
  v[y][x] = 'I';
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
    if (v[ny][nx] == 'I') continue;
    ret += dfs(r, c, v, ny, nx);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  int r; cin >> r;
  int c; cin >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  vector<int> f;
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (v[i][j] == '.') f.push_back(dfs(r, c, v, i, j));
  }
  sort(f.begin(), f.end(), greater<int>());

  int ans = 0;
  for (int x : f) {
    if (x > n) break;
    n -= x; ans++;
  }
  cout << ans << " room" << (ans == 1 ? "" : "s") << ", " << n << " square metre(s) left over";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}