#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

inline long long mul(long long a, long long b) {
  return a * b % MOD;
}

void solve(void) {
  int n; cin >> n;

  vector<int> fact(n+1, 1);
  for (int i=2; i<=n; i++) {
    fact[i] = mul(i, fact[i-1]);
  }

  vector<int> dp(n+3, 0); dp[2] = 1; dp[3] = 2;
  for (int i=3; i<=n; i++) {
    dp[i] = mul(i-1, dp[i-1] + dp[i-2]);
  }
  cout << mul(fact[n], dp[n]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}