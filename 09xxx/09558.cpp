#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int m; cin >> m;
  vector<int> b(m);
  for (int i=0; i<m; i++) cin >> b[i];

  int ans = 1e9;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      ans = min(ans, abs(a[i] - b[j]));
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}