#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  string a, b;
  cin >> a;
  cin >> b;

  int ans = 0;
  vector<vector<int> > dp(a.length(), vector<int>(b.length(), 0));
  for (int i=0; i<a.length(); i++) {
    for (int j=0; j<b.length(); j++) {
      if (a[i] != b[j]) continue;
      if (i == 0 || j == 0) dp[i][j] = 1;
      else dp[i][j] = dp[i-1][j-1] + 1;
      ans = max(ans, dp[i][j]);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}