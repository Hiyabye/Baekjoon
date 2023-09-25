#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;
  vector<int> v(k+1), sum(k+1, 0);
  for (int i=1; i<=k; i++) {
    cin >> v[i];
    sum[i] = sum[i-1] + v[i];
  }

  vector<vector<int> > dp(k+1, vector<int>(k+1, 0));
  for (int i=1; i<=k-1; i++) {
    for (int j=1; j<=k-i; j++) {
      dp[j][j+i] = 1e9;
      for (int l=j; l<=j+i-1; l++) {
        dp[j][j+i] = min(dp[j][j+i], dp[j][l] + dp[l+1][j+i] + sum[j+i] - sum[j-1]);
      }
    }
  }
  cout << dp[1][k] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}