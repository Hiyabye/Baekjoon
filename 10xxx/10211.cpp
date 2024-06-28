#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  for (int i=1; i<n; i++) v[i] += v[i-1];

  vector<int> dp(n);
  dp[0] = v[0];
  for (int i=1; i<n; i++) {
    dp[i] = max(dp[i-1], v[i]);
    for (int j=0; j<i; j++) {
      dp[i] = max(dp[i], v[i] - v[j]);
    }
  }
  cout << dp[n-1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}