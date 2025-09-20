#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(int idx) {
  int c, v, l; cin >> c >> v >> l;

  vector<vector<long long>> dp(l+1, vector<long long>(2, 0));
  dp[1][0] = c; dp[1][1] = v;
  for (int i=2; i<=l; i++) {
    dp[i][0] = dp[i-1][1] * c % MOD;
    dp[i][1] = (dp[i-1][0] + dp[i-1][1]) * v % MOD;
  }
  cout << "Case #" << idx << ": " << dp[l][1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}