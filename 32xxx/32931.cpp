#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<long long>> a(2, vector<long long>(n));
  for (int i=0; i<2; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  vector<vector<long long>> dp(2, vector<long long>(n));
  dp[0][0] = a[0][0] + max(0LL, a[1][0]); dp[1][0] = a[0][0] + a[1][0];
  for (int i=1; i<n; i++) {
    dp[0][i] = max({dp[0][i-1], dp[0][i-1] + a[1][i], dp[1][i-1] + a[1][i]}) + a[0][i];
    dp[1][i] = max({dp[1][i-1], dp[1][i-1] + a[0][i], dp[0][i-1] + a[0][i]}) + a[1][i];
  }
  cout << dp[1][n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}