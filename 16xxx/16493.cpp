#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<int> dp(n+1, 0);
  while (m--) {
    int a, b; cin >> a >> b;
    for (int i=n; i>=a; i--) {
      dp[i] = max(dp[i], dp[i-a] + b);
    }
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}