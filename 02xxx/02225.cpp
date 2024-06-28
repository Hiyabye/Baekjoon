#include <iostream>
#include <vector>
using namespace std;
#define MOD 1000000000

void solve(void) {
  int n, k;
  cin >> n >> k;

  vector<vector<long long> > dp(n+1, vector<long long>(k+1, 0));
  for (int i=0; i<=n; i++) {
    dp[i][1] = 1;
  }
  for (int i=2; i<=k; i++) {
    for (int j=0; j<=n; j++) {
      for (int k=0; k<=n-j; k++) {
        dp[j+k][i] = (dp[j+k][i] + dp[j][i-1]) % MOD;
      }
    }
  }

  cout << dp[n][k] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}