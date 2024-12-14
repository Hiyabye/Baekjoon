#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> dp(n+1, 0);
  dp[0] = dp[1] = 1;
  for (int i=2; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];
  
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}