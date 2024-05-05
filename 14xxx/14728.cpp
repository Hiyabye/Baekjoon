#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;

  vector<int> dp(t+1, 0);
  while (n--) {
    int k, s; cin >> k >> s;
    for (int i=t; i>=k; i--) {
      dp[i] = max(dp[i], dp[i-k] + s);
    }
  }
  cout << dp[t];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}