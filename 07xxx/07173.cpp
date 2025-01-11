#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<char>> v(m, vector<char>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  double ans = 0.0;
  for (int y=0; y<m; y++) for (int x=0; x<n; x++) {
    int sum = 0, cnt = 0;
    for (int i=0; i<4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
      sum += abs(v[y][x] - v[ny][nx]); cnt++;
    }
    ans += (double)sum / cnt;
  }
  cout << fixed << setprecision(4) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}