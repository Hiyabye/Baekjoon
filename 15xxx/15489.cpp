#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  vector<vector<int> > dp(31, vector<int>(31));
  for (int i=1; i<=30; i++) {
    for (int j=1; j<=i; j++) {
      if (j == 1 || j == i) dp[i][j] = 1;
      else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
    }
  }

  int r, c, w;
  cin >> r >> c >> w;

  int ans = 0;
  for (int i=r; i<=r+w-1; i++) {
    for (int j=c; j<=c-r+i; j++) {
      ans += dp[i][j];
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}