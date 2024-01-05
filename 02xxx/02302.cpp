#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  vector<int> dp(n+1, 1);
  dp[2] = 2;
  for (int i=3; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];

  int ans = 1, p = 0;
  for (int i=0; i<m; i++) {
    ans *= dp[v[i]-p-1];
    p = v[i];
  }
  ans *= dp[n-p];
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}