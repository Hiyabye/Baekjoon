#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int h, w; cin >> h >> w;
  vector<vector<int>> v(h, vector<int>(w+2, 0));
  for (int i=0; i<h; i++) for (int j=1; j<=w; j++) cin >> v[i][j];

  vector<vector<int>> dp(h, vector<int>(w+2, 0));
  for (int i=1; i<=w; i++) dp[0][i] = v[0][i];
  for (int i=1; i<h; i++) {
    for (int j=1; j<=w; j++) {
      dp[i][j] = max({dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1]}) + v[i][j];
    }
  }

  int ans = 0;
  for (int i=1; i<=w; i++) {
    ans = max(ans, dp[h-1][i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}