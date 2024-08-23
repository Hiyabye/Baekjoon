#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, d; cin >> n >> d;
  vector<vector<pair<int, int>>> v(d+1);
  while (n--) {
    int a, b, c; cin >> a >> b >> c;
    v[a].push_back({b, c});
  }

  vector<int> dp(d+1, 0);
  for (int i=1; i<=d; i++) dp[i] = i;
  for (int i=0; i<=d; i++) {
    for (auto [b, c] : v[i]) {
      if (b <= d) dp[b] = min(dp[b], dp[i] + c);
    }
    if (i+1 <= d) dp[i+1] = min(dp[i+1], dp[i] + 1);
  }
  cout << dp[d];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}