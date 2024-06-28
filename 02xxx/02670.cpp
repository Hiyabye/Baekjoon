#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<double> dp(n);
  dp[0] = v[0];
  for (int i=1; i<n; i++) {
    dp[i] = max(dp[i-1] * v[i], v[i]);
  }
  cout << fixed << setprecision(3) << *max_element(dp.begin(), dp.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}