#include <iostream>
#include <string>
#include <vector>
#define MOD 1000000
using namespace std;

int solve(void) {
  string s; cin >> s;
  if (s[0] == '0') return 0;

  int n = s.length();
  vector<int> dp(n+1, 0);
  dp[0] = dp[1] = 1;

  for (int i=2; i<=n; i++) {
    if (s[i-1] != '0') dp[i] = dp[i-1] % MOD;
    if (s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6')) dp[i] = (dp[i] + dp[i-2]) % MOD;
  }
  return dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cout << solve();
  return 0;
}