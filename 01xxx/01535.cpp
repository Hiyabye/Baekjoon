#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> l(n), j(n);
  for (int i=0; i<n; i++) cin >> l[i];
  for (int i=0; i<n; i++) cin >> j[i];

  vector<int> dp(100, 0);
  for (int i=0; i<n; i++) {
    for (int k=99; k>=l[i]; k--) {
      dp[k] = max(dp[k], dp[k-l[i]] + j[i]);
    }
  }
  cout << dp[99];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}