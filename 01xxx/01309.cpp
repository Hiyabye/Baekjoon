#include <iostream>
#include <vector>
using namespace std;
#define MOD 9901

void solve(void) {
  int n;
  cin >> n;

  vector<int> dp(n+1);
  dp[0] = 1, dp[1] = 3;
  for (int i=2; i<=n; i++) {
    dp[i] = (dp[i-1]*2 + dp[i-2]) % MOD;
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}