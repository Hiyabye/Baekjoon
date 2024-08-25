#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  unordered_map<int, int> dp;
  for (int i=0; i<n; i++) {
    dp[a[i]] = max(dp[a[i]], dp[a[i]-1] + 1);
  }

  int ans = 0;
  for (auto& [_, v] : dp) {
    ans = max(ans, v);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}