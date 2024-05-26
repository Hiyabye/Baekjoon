#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n), d(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    int cur = ans % (c[i] + d[i]);
    if (cur < c[i]) ans += a[i];
    else if (b[i] > c[i] - cur + d[i] + a[i]) ans += c[i] - cur + d[i] + a[i];
    else ans += b[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}