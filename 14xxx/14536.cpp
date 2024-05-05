#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n), w(n);
  for (int i=0; i<n; i++) cin >> t[i] >> w[i];

  int sum = 0;
  for (int i=0; i<n; i++) sum += t[i];

  vector<int> dp(sum+1, 0);
  for (int i=0; i<n; i++) {
    for (int j=sum; j>=t[i]+w[i]; j--) {
      dp[j] = max(dp[j], dp[j-t[i]-w[i]] + t[i]);
    }
  }
  cout << sum - dp[sum] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}