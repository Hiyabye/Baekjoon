#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  vector<int> dp(n, n-1);
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if (a[j] % a[i]) continue;
      dp[j] = min(dp[j], dp[i]-1);
    }
  }
  cout << *min_element(dp.begin(), dp.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}