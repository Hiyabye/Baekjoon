#include <iostream>
#include <vector>
#define MOD 1000000009
using namespace std;

inline vector<long long> precompute(void) {
  vector<long long> dp(100001);
  dp[0] = dp[1] = 1; dp[2] = dp[3] = 2; dp[4] = dp[5] = 3;
  for (int i=6; i<=100000; i++) {
    dp[i] = (dp[i-2] + dp[i-4] + dp[i-6]) % MOD;
  }
  return dp;
}

void solve(const vector<long long> &dp) {
  int n; cin >> n;

  cout << dp[n] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<long long> dp = precompute();

  int t; cin >> t;
  while (t--) solve(dp);
  return 0;
}