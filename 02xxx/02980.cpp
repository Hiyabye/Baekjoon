#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, l; cin >> n >> l;
  vector<int> d(n), r(n), g(n);
  for (int i=0; i<n; i++) cin >> d[i] >> r[i] >> g[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += d[i] - (i > 0 ? d[i-1] : 0);
    int t = ans % (r[i] + g[i]);
    if (t < r[i]) ans += r[i] - t;
  }
  ans += l - d[n-1];

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}