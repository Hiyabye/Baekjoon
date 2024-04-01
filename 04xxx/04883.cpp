#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<vector<long long>> v(n, vector<long long>(3));
  for (int i=0; i<n; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  vector<vector<long long>> dp(n, vector<long long>(3));
  dp[0][0] = 1e18; dp[0][1] = v[0][1]; dp[0][2] = v[0][1] + v[0][2];
  for (int i=1; i<n; i++) {
    dp[i][0] = min(dp[i-1][0], dp[i-1][1]) + v[i][0];
    dp[i][1] = min({dp[i][0], dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + v[i][1];
    dp[i][2] = min({dp[i][1], dp[i-1][1], dp[i-1][2]}) + v[i][2];
  }
  cout << idx << ". " << dp[n-1][1] << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}