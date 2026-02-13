#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int g, d; cin >> g >> d;
  
  vector<int> dp(g+d+1, 0); dp[0] = 1;
  for (int i=1; i<=g; i++) for (int j=1; j<=d; j++) {
    if (i < j) continue;
    dp[i] = (dp[i] + dp[i-j]) % MOD;
  }
  cout << dp[g] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}