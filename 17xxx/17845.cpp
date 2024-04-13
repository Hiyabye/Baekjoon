#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> i(k), t(k);
  for (int j=0; j<k; j++) cin >> i[j] >> t[j];

  vector<int> dp(n+1, 0);
  for (int j=0; j<k; j++) for (int l=n; l>=t[j]; l--) {
    dp[l] = max(dp[l], dp[l-t[j]] + i[j]);
  }
  cout << *max_element(dp.begin(), dp.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}