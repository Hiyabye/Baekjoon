#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<pair<int, int> > a(n);
  for (int i=0; i<n; i++) cin >> a[i].first >> a[i].second;

  sort(a.begin(), a.end());

  vector<int> dp(n, 1);
  for (int i=0; i<n; i++) {
    for (int j=0; j<i; j++) {
      if (a[i].second > a[j].second) {
        dp[i] = max(dp[i], dp[j]+1);
      }
    }
  }
  cout << n - *max_element(dp.begin(), dp.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}