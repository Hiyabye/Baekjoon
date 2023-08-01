#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<long long> dp(n+1, 0);
  dp[0] = 1;
  for (int i=1; i<=n; i++) {
    for (int j=0; j<i; j++) {
      dp[i] += dp[j] * dp[i-j-1];
    }
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}