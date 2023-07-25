#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, k;
  cin >> n >> k;
  vector<int> c(n);
  for (int i=0; i<n; i++) {
    cin >> c[i];
  }

  vector<int> dp(k+1, 1e9);
  dp[0] = 0;
  for (int i=1; i<=k; i++) {
    for (int j=0; j<n; j++) {
      if (c[j] > i) continue;
      dp[i] = min(dp[i], dp[i-c[j]]+1);
    }
  }
  cout << (dp[k] == 1e9 ? -1 : dp[k]) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}