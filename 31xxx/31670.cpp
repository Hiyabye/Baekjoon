#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> r(n);
  for (int i=0; i<n; i++) cin >> r[i];

  vector<vector<long long>> dp(n, vector<long long>(2, 1e18));
  dp[0][0] = 0; dp[0][1] = r[0];
  for (int i=1; i<n; i++) {
    dp[i][0] = dp[i-1][1];
    dp[i][1] = min(dp[i-1][0] + r[i], dp[i-1][1] + r[i]);
  }
  cout << min(dp[n-1][0], dp[n-1][1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}