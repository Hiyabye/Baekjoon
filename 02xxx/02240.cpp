#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int t, w; cin >> t >> w;
  vector<int> v(t+1, 0);
  for (int i=1; i<=t; i++) cin >> v[i];

  vector<vector<vector<int>>> dp(w+1, vector<vector<int>>(t+1, vector<int>(2, 0)));
  for (int i=1; i<=t; i++) dp[0][i][0] = dp[0][i-1][0] + (v[i] == 1);
  for (int i=1; i<=w; i++) for (int j=1; j<=t; j++) {
    dp[i][j][0] = max(dp[i][j-1][0], dp[i-1][j-1][1]) + (v[j] == 1);
    dp[i][j][1] = max(dp[i][j-1][1], dp[i-1][j-1][0]) + (v[j] == 2);
  }
  cout << max(dp[w][t][0], dp[w][t][1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}