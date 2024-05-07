#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(int idx) {
  int m, n; cin >> m >> n;

  vector<vector<long long>> dp(m, vector<long long>(n, 0));
  for (int i=0; i<n; i++) dp[0][i] = 1;
  for (int i=1; i<m; i++) for (int j=i; j<n; j++) {
    dp[i][j] = (dp[i][j-1] + dp[i-1][j-1]) * (i+1) % MOD;
  }
  cout << "Case #" << idx << ": " << dp[m-1][n-1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}