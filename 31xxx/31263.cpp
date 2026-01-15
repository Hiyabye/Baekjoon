#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<int> dp(n, 1e9); dp[0] = 1;
  if (n > 1) dp[1] = 1;
  for (int i=2; i<n; i++) {
    if (s[i] != '0') dp[i] = dp[i-1] + 1;
    if (s[i-1] != '0') dp[i] = min(dp[i], dp[i-2] + 1);
    if (s[i-2] != '0' && s.substr(i-2, 3) <= "641") {
      if (i >= 3) dp[i] = min(dp[i], dp[i-3] + 1);
      else dp[i] = min(dp[i], 1);
    }
  }
  cout << dp[n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}