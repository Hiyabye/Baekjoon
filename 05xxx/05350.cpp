#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, w; cin >> n >> w;

  vector<int> dp(w+1, 0);
  while (n--) {
    int a, b; cin >> a >> b;
    for (int i=w; i>=a; i--) {
      dp[i] = max(dp[i], dp[i-a] + b);
    }
  }
  cout << dp[w] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}