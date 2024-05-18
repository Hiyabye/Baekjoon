#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<vector<int>> dp(2, vector<int>(n, 0));
  dp[0][0] = v[0]; dp[1][0] = v[0];
  for (int i=1; i<n; i++) {
    dp[0][i] = max(v[i], dp[0][i-1] + v[i]);
    dp[1][i] = max(dp[0][i-1], dp[1][i-1] + v[i]);
  }
  cout << max(*max_element(dp[0].begin(), dp[0].end()), *max_element(dp[1].begin(), dp[1].end()));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}