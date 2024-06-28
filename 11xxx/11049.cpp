#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> r(n), c(n);
  for (int i=0; i<n; i++) cin >> r[i] >> c[i];

  vector<vector<int> > dp(n, vector<int>(n, 0));
  for (int i=1; i<=n-1; i++) {
    for (int j=0; j<=n-i-1; j++) {
      dp[j][j+i] = (1<<31)-1; // INT_MAX
      for (int k=j; k<=j+i-1; k++) {
        dp[j][j+i] = min(dp[j][j+i], dp[j][k] + dp[k+1][j+i] + r[j] * c[k] * c[j+i]);
      }
    }
  }
  cout << dp[0][n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}