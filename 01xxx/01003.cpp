#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void solve(void) {
  vector<pair<int, int> > dp(41);
  dp[0] = make_pair(1, 0);
  dp[1] = make_pair(0, 1);
  
  for (int i=2; i<=40; i++) {
    dp[i].first = dp[i-1].first + dp[i-2].first;
    dp[i].second = dp[i-1].second + dp[i-2].second;
  }
  
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << dp[n].first << " " << dp[n].second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}