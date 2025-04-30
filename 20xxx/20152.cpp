#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

long long solve(void) {
  int h, n; cin >> h >> n;
  if (h == n) return 1;

  int sz = abs(h - n);
  vector<vector<long long>> dp(sz+1, vector<long long>(sz+1, 1));
  for (int i=1; i<=sz; i++) {
    dp[i][i] = dp[i-1][i];
    for (int j=i+1; j<=sz; j++) {
      dp[i][j] = dp[i-1][j] + dp[i][j-1];
    }
  }
  return dp[sz][sz];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}