// https://www.sciencedirect.com/science/article/pii/S0167642315000118

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;
  vector<long long> t(n+1, 0);
  for (int i=1; i<=n; i++) cin >> t[i];
  sort(t.begin(), t.end());

  // corner case
  if (n <= c) {
    cout << t[n];
    return;
  }

  vector<vector<long long>> dp(n+1, vector<long long>((n-2)/c+1));
  for (int i=2; i<=c; i++) dp[i][0] = t[i]; // base case
  for (int i=2; i<=n; i++) t[i] += t[i-1];  // prefix sum

  // e > 0
  for (int i=2; i<=c; i++) for (int j=1; j<=(n-2)/c; j++) {
    int p = min(i, j+1);
    dp[i][j] = dp[p][j-p+1] + t[p] + t[i] - t[i-1];
    for (int k=p-1; k>=2; k--) {
      dp[i][j] = min(dp[i][j], dp[k][j-k+1] + t[k] + t[i] - t[i-1]);
    }
  }

  // n = c+1
  for (int j=0; j<=(n-2)/c; j++) {
    dp[c+1][j] = dp[2][j] + t[c+1] - t[c] + t[1];
    for (int k=2; k<=min(j+1, c-1); k++) {
      dp[c+1][j] = min(dp[c+1][j], dp[k+1][j-k+1] + t[k] + t[c+1] - t[c]);
    }
  }

  // n > c+1
  for (int i=c+2; i<=n; i++) for (int j=0; j<=(n-i)/c; j++) {
    dp[i][j] = dp[i-c][j+1] + t[i] - t[i-1];
    for (int k=1; k<=min(j+1, c-1); k++) {
      dp[i][j] = min(dp[i][j], dp[i-c+k][j-k+1] + t[k] + t[i] - t[i-1]);
    }
  }

  cout << dp[n][0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}