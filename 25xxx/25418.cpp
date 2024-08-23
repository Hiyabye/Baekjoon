#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int a, k; cin >> a >> k;

  vector<int> dp(k+1, 1e9); dp[a] = 0;
  queue<int> q; q.push(a);
  while (!q.empty()) {
    int x = q.front(); q.pop();
    if (x == k) break;
    if (x+1 <= k && dp[x+1] > dp[x] + 1) {
      dp[x+1] = dp[x] + 1;
      q.push(x+1);
    }
    if (x*2 <= k && dp[x*2] > dp[x] + 1) {
      dp[x*2] = dp[x] + 1;
      q.push(x*2);
    }
  }
  cout << dp[k];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}