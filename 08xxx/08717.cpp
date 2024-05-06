#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];

  int ans = 1e9;
  for (int i=2; i<=n; i++) a[i] += a[i-1];
  for (int i=1; i<=n-1; i++) {
    ans = min(ans, abs(2*a[i]-a[n]));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}