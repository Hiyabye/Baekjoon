#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;
  vector<int> d(n), m(n);
  for (int i=0; i<n; i++) cin >> d[i] >> m[i];

  vector<int> dp(t+1, 0);
  for (int i=0; i<n; i++) for (int j=t; j>=d[i]; j--) {
    dp[j] = max(dp[j], dp[j-d[i]] + m[i]);
  }
  cout << accumulate(m.begin(), m.end(), 0) - dp[t];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}