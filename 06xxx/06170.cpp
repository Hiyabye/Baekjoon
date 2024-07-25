#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;

  vector<vector<int>> dp(n+1, vector<int>(2, 1));
  for (int i=2; i<=n; i++) {
    dp[i][0] = dp[i-1][0] + dp[i-1][1];
    dp[i][1] = dp[i-1][0];
  }
  cout << "Scenario #" << idx << ":\n" << dp[n][0] + dp[n][1] << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}