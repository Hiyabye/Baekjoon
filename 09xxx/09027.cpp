#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];
  for (int i=1; i<n; i++) b[i] += b[i-1];

  vector<long long> dp(n); dp[0] = 0;
  for (int i=1; i<n; i++) dp[0] += (a[i] - a[0]) * (b[i] - b[i-1]);
  for (int i=1; i<n; i++) dp[i] = dp[i-1] + (a[i] - a[i-1]) * (2 * b[i-1] - b[n-1]);
  cout << a[distance(dp.begin(), min_element(dp.begin(), dp.end()))] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}