#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;
  vector<int> dp(n+2);
  dp[1] = 1; dp[2] = 1;

  int ans = 1;
  for (int i=2; i<=n; i++) {
    dp[i+1] = (dp[i] + dp[i-1]) % MOD;
    ans = (ans + dp[gcd(i+1, n+1)]) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}