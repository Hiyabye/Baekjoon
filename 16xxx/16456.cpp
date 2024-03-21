#include <iostream>
#include <vector>
#define MOD 1000000009
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> dp(n+3);
  dp[1] = 1; dp[2] = 1; dp[3] = 2;
  for (int i=4; i<=n; i++) {
    dp[i] = (dp[i-1] + dp[i-3]) % MOD;
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}