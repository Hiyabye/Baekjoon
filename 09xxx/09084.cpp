#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  int m; cin >> m;

  vector<int> dp(m+1, 0);
  dp[0] = 1;
  for (int i=0; i<n; i++) {
    for (int j=v[i]; j<=m; j++) {
      dp[j] += dp[j-v[i]];
    }
  }
  cout << dp[m] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}