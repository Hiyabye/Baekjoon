#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<int> dp = v;
  for (int i=0; i<n; i++) for (int j=0; j<i; j++) {
    if (v[i] <= v[j]) continue;
    dp[i] = max(dp[i], dp[j] + v[i]);
  }
  cout << *max_element(dp.begin(), dp.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}