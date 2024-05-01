#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int h, y; cin >> h >> y;
  
  vector<int> dp(y+1, 0); dp[0] = h;
  for (int i=1; i<=y; i++) {
    dp[i] = dp[i-1] * 1.05;
    if (i >= 3) dp[i] = max(dp[i], (int)(dp[i-3] * 1.2));
    if (i >= 5) dp[i] = max(dp[i], (int)(dp[i-5] * 1.35));
  }
  cout << dp[y];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}