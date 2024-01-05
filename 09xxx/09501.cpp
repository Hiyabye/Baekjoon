#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, d; cin >> n >> d;
  vector<int> v(n), f(n), c(n);
  for (int i=0; i<n; i++) cin >> v[i] >> f[i] >> c[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (v[i] * f[i] >= c[i] * d) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}