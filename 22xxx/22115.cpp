#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> c(n);
  for (int i=0; i<n; i++) cin >> c[i];

  vector<int> dp(k+1, 1e9); dp[0] = 0;
  for (int i=0; i<n; i++) {
    for (int j=k; j>=c[i]; j--) {
      dp[j] = min(dp[j], dp[j-c[i]] + 1);
    }
  }
  cout << (dp[k] == 1e9 ? -1 : dp[k]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}