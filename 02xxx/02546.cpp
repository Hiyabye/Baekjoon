#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<long long> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  long long c = 0, d = 0;
  for (int i=0; i<n; i++) c += a[i];
  for (int i=0; i<m; i++) d += b[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (a[i] * n < c && a[i] * m > d) ans++;
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