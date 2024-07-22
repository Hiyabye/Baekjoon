#include <iostream>
#include <vector>
using namespace std;

int dz[6] = {0, 0, 0, 0, 1, -1};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dx[6] = {1, -1, 0, 0, 0, 0};

inline bool check(const vector<vector<vector<bool>>> &v, int z, int y, int x) {
  if (!v[z][y][x]) return false;
  for (int i=0; i<6; i++) {
    int nz = z + dz[i], ny = y + dy[i], nx = x + dx[i];
    if (!v[nz][ny][nx]) return false;
  }
  return true;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<vector<bool>>> v(n+2, vector<vector<bool>>(n+2, vector<bool>(n+2, false)));
  while (m--) {
    int i, j, k; cin >> i >> j >> k;
    v[i][j][k] = true;
  }

  int ans = 0;
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) for (int k=1; k<=n; k++) {
    ans += check(v, i, j, k);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}