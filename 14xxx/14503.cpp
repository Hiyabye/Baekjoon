#include <iostream>
#include <vector>
using namespace std;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

inline bool valid(int n, int m, int r, int c) {
  return 0 <= r && r < n && 0 <= c && c < m;
}

void solve(void) {
  int n, m; cin >> n >> m;
  int r, c, d; cin >> r >> c >> d;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 0;
  do {
    if (v[r][c] == 0) v[r][c] = 2, ans++;

    bool flag = false;
    for (int i=0; i<4; i++) {
      d = (d + 3) % 4;
      int nr = r + dr[d], nc = c + dc[d];
      if (!valid(n, m, nr, nc) || v[nr][nc]) continue;
      r = nr, c = nc;
      flag = true;
      break;
    }
    if (flag) continue;
    
    r -= dr[d]; c -= dc[d];
  } while (valid(n, m, r, c) && v[r][c] != 1);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}