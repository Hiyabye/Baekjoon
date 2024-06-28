#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();

  vector<vector<int> > dp(n, vector<int>(n, 0));
  for (int i=0; i<n; i++) dp[i][i] = 1;

  for (int i=1; i<=n-1; i++) {
    for (int j=0; j<n-i; j++) {
      dp[j][j+i] = dp[j][j+i-1] + dp[j+1][j+i] - dp[j+1][j+i-1] + (s[j] == s[j+i] ? dp[j+1][j+i-1] + 1 : 0);
    }
  }
  cout << dp[0][n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}