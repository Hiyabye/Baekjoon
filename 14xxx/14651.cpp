#include <iostream>
#include <vector>
#define MOD 1000000009
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<long long> dp(33334);
  dp[1] = 0; dp[2] = 2;
  for (int i=3; i<=n; i++) {
    dp[i] = (dp[i-1] * 3) % MOD;
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}