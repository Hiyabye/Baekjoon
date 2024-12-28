#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;
  double a, b, c, d; cin >> a >> b >> c >> d;

  vector<vector<double>> dp(n+1, vector<double>(2));
  dp[0][0] = 1.0 - x, dp[0][1] = x;
  for (int i=1; i<=n; i++) {
    dp[i][0] = dp[i-1][0] * a + dp[i-1][1] * c;
    dp[i][1] = dp[i-1][0] * b + dp[i-1][1] * d;
  }
  cout << (int)(dp[n][0] * 1000 + 0.5) << "\n" << (int)(dp[n][1] * 1000 + 0.5);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}