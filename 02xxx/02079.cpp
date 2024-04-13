#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();

  vector<vector<bool>> dp(n, vector<bool>(n, false));
  for (int i=0; i<n; i++) dp[i][i] = true;
  for (int i=0; i<n-1; i++) {
    if (s[i] == s[i+1]) dp[i][i+1] = true;
  }
  for (int i=2; i<n; i++) {
    for (int j=0; j<n-i; j++) {
      if (!dp[j+1][j+i-1]) continue;
      if (s[j] == s[j+i]) dp[j][j+i] = true;
    }
  }

  vector<int> ans(n, 0);
  for (int i=0; i<n; i++) {
    if (dp[0][i]) {
      ans[i] = 1;
      continue;
    }
    ans[i] = i+1;
    for (int j=0; j<i; j++) {
      if (dp[j+1][i]) ans[i] = min(ans[i], ans[j]+1);
    }
  }
  cout << ans[n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}