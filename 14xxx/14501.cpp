#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> t(16, 0), p(16, 0);
vector<int> dp(16, 0);

void solve(void) {
  cin >> n;
  for (int i=1; i<=n; i++) {
    cin >> t[i] >> p[i];
  }

  for (int i=1; i<=n; i++) {
    dp[i] = max(dp[i], dp[i-1]);
    if (i+t[i]-1 <= n) {
      dp[i+t[i]-1] = max(dp[i+t[i]-1], dp[i-1]+p[i]);
    }
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}