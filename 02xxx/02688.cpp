#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<vector<long long>> dp(n, vector<long long>(10, 0));
  for (int i=0; i<10; i++) dp[0][i] = 1;
  for (int i=1; i<n; i++) for (int j=0; j<10; j++) for (int k=j; k<10; k++) {
    dp[i][j] += dp[i-1][k];
  }

  long long ans = 0;
  for (int i=0; i<10; i++) {
    ans += dp[n-1][i];
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}