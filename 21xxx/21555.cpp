#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<long long> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  vector<vector<long long>> dp(2, vector<long long>(n, 0));
  dp[0][0] = a[0]; dp[1][0] = b[0];
  for (int i=1; i<n; i++) {
    dp[0][i] = min(dp[0][i-1], dp[1][i-1] + k) + a[i];
    dp[1][i] = min(dp[1][i-1], dp[0][i-1] + k) + b[i];
  }
  cout << min(dp[0][n-1], dp[1][n-1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}