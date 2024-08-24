#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> dp(n+1, 0);
  for (int i=0; i*i<=n; i++) for (int j=0; i*i+j*j<=n; j++) {
    dp[i*i+j*j]++;
  }

  int ans = 0;
  for (int i=0; i<=n; i++) {
    ans += dp[i] * dp[n-i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}