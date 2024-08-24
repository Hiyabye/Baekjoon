#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> b(n, a[0]);
  for (int i=1; i<n; i++) {
    b[i] = min(b[i-1], a[i]);
  }

  vector<int> dp(n, 0);
  for (int i=1; i<n; i++) {
    dp[i] = max(dp[i-1], a[i] - b[i]);
  }

  for (int i=0; i<n; i++) {
    cout << dp[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}