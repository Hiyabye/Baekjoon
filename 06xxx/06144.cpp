#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> w(n), d(n);
  for (int i=0; i<n; i++) cin >> w[i] >> d[i];

  vector<int> dp(m+1, 0);
  for (int i=0; i<n; i++) for (int j=m; j>=w[i]; j--) {
    dp[j] = max(dp[j], dp[j-w[i]] + d[i]);
  }
  cout << dp[m];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}