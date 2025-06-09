#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int presum(const vector<vector<int>> &dp, int r, int c, int x1, int y1, int x2, int y2) {
  x1 = max(1, min(r, x1)); y1 = max(1, min(c, y1));
  x2 = max(1, min(r, x2)); y2 = max(1, min(c, y2));
  return dp[x1][y1] - dp[x1][y2-1] - dp[x2-1][y1] + dp[x2-1][y2-1];
}

void solve(void) {
  int n, r, c, w; cin >> n >> r >> c >> w;
  vector<vector<int>> dp(r+1, vector<int>(c+1, 0));
  while (n--) {
    int x, y; cin >> x >> y;
    dp[x][y] = 1;
  }

  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) dp[i][j] += dp[i-1][j];
  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) dp[i][j] += dp[i][j-1];

  int mx = 0, px = 0, py = 0;
  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) {
    if (presum(dp, r, c, i, j, i, j)) continue;
    if (presum(dp, r, c, i+w/2, j+w/2, i-w/2, j-w/2) > mx) {
      mx = presum(dp, r, c, i+w/2, j+w/2, i-w/2, j-w/2);
      px = i;
      py = j;
    }
  }
  cout << mx << "\n" << px << " " << py;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}