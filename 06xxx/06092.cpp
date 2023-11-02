#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  vector<int> dp(13);

  dp[0] = 0, dp[1] = 1;
  for (int i=2; i<=12; i++) {
    int val = 1e9;
    for (int j=1; j<=i; j++) {
      val = min(val, 2 * dp[i-j] + (1<<j) - 1);
    }
    dp[i] = val;
  }

  for (int i=1; i<=12; i++) cout << dp[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}