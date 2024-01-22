#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> dp(n+1, 1);
  for (int i=2; i<=n; i++) {
    dp[i] = dp[i-1] * 2;
    if (!(i & 1) && i >= 4) dp[i] -= dp[i-4];
    if (!(i & 1) && i >= 6) dp[i] -= dp[i-5];
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}