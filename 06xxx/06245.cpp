#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int calc(const string &s) {
  if (s[0] == 'A') return 1;
  if (s[0] == 'T') return 10;
  if (s[0] == 'J') return 11;
  if (s[0] == 'Q') return 12;
  if (s[0] == 'K') return 13;
  return s[0] - '0';
}

void solve(void) {
  int n; cin >> n;
  vector<vector<string>> v(n, vector<string>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  vector<vector<int>> dp(n, vector<int>(n, 0));
  dp[n-1][0] = calc(v[n-1][0]);
  for (int i=1; i<n; i++) dp[n-1][i] = dp[n-1][i-1] + calc(v[n-1][i]);
  for (int i=n-2; i>=0; i--) dp[i][0] = dp[i+1][0] + calc(v[i][0]);
  for (int i=n-2; i>=0; i--) for (int j=1; j<n; j++) {
    dp[i][j] = max(dp[i+1][j], dp[i][j-1]) + calc(v[i][j]);
  }
  cout << dp[0][n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}