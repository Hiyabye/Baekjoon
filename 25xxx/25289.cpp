#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calc(const vector<int> &a, int d) {
  vector<int> dp(101, 0);
  for (int x : a) {
    dp[x] = (1 <= x-d && x-d <= 100) ? dp[x-d] + 1 : 1;
  }
  return *max_element(dp.begin(), dp.end());
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int i=-99; i<=99; i++) {
    ans = max(ans, calc(a, i));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}