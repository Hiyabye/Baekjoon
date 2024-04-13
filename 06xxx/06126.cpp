#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int v, n; cin >> v >> n;

  vector<long long> dp(n+1, 0); dp[0] = 1;
  while (v--) {
    int x; cin >> x;
    for (int i=x; i<=n; i++) {
      dp[i] += dp[i-x];
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