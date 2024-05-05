#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> p(n), q(n);
  for (int i=0; i<n; i++) cin >> p[i];
  for (int i=0; i<n; i++) cin >> q[i];

  int sum = 0;
  for (int i=0; i<n; i++) sum += q[i];

  vector<int> dp(sum+1, 0);
  for (int i=0; i<n; i++) {
    for (int j=sum; j>=q[i]; j--) {
      dp[j] = max(dp[j], dp[j-q[i]] + p[i]);
    }
  }

  for (int i=0; i<=sum; i++) {
    if (dp[i] >= m) {
      cout << i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}