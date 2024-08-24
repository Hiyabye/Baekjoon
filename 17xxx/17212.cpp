#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> dp(n+1, 1e9); dp[0] = 0;
  for (int i=7; i<=n; i++) dp[i] = min(dp[i], dp[i-7] + 1);
  for (int i=5; i<=n; i++) dp[i] = min(dp[i], dp[i-5] + 1);
  for (int i=2; i<=n; i++) dp[i] = min(dp[i], dp[i-2] + 1);
  for (int i=1; i<=n; i++) dp[i] = min(dp[i], dp[i-1] + 1);
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}