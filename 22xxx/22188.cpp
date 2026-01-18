#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> c(n), t(n), p(n), d(m);
  for (int i=0; i<n; i++) cin >> c[i] >> t[i] >> p[i];
  for (int i=0; i<m; i++) cin >> d[i];

  int ans = 1, mn = -1;
  for (int i=0; i<n; i++) {
    int cur = c[i] * 100;
    for (int x : d) {
      if (x < t[i]) continue;
      cur += (x+t[i]-1) / t[i] * p[i];
    }
    if (mn == -1 || cur < mn) ans = i+1, mn = cur;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}