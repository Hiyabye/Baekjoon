#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int k;
  cin >> k;

  vector<pair<int, int> > dp(k+1);
  dp[0] = make_pair(1, 0);
  for (int i=1; i<=k; i++) {
    dp[i].first = dp[i-1].second;
    dp[i].second = dp[i-1].first + dp[i-1].second;
  }
  cout << dp[k].first << " " << dp[k].second << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}