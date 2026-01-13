#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int w = *max_element(x.begin(), x.end());
  int h = *max_element(y.begin(), y.end());

  vector<vector<int>> v(w+1, vector<int>(h+1, 0));
  for (int i=0; i<n; i++) {
    v[x[i]][y[i]] = max(0, m - x[i] - y[i]);
  }

  vector<vector<int>> dp(w+1, vector<int>(h+1, 0));
  for (int i=1; i<=w; i++) dp[i][0] = dp[i-1][0] + v[i][0];
  for (int j=1; j<=h; j++) dp[0][j] = dp[0][j-1] + v[0][j];
  for (int i=1; i<=w; i++) for (int j=1; j<=h; j++) {
    dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + v[i][j];
  }
  cout << dp[w][h] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}