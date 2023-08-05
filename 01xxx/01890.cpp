#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<int> > a(n, vector<int>(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
    }
  }

  vector<vector<long long> > dp(n, vector<long long>(n, 0));
  dp[0][0] = 1;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (i == n-1 && j == n-1) continue;
      if (dp[i][j] == 0) continue;
      if (i+a[i][j] < n) dp[i+a[i][j]][j] += dp[i][j];
      if (j+a[i][j] < n) dp[i][j+a[i][j]] += dp[i][j];
    }
  }
  cout << dp[n-1][n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}