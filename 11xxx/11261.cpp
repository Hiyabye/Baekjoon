#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int w; cin >> w;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  vector<int> dp(w+1, 0);
  for (int i=0; i<n; i++) for (int j=w; j>=a[i]; j--) {
    dp[j] = max(dp[j], dp[j-a[i]] + b[i]);
  }
  cout << dp[w] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}