#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int t; cin >> t;
  int n; cin >> n;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  int m; cin >> m;
  vector<int> b(m+1, 0);
  for (int i=1; i<=m; i++) cin >> b[i];

  vector<int> c, d;
  for (int i=1; i<=n; i++) a[i] += a[i-1];
  for (int i=0; i<=n-1; i++) for (int j=i+1; j<=n; j++) c.push_back(a[j] - a[i]);
  for (int i=1; i<=m; i++) b[i] += b[i-1];
  for (int i=0; i<=m-1; i++) for (int j=i+1; j<=m; j++) d.push_back(b[j] - b[i]);
  sort(d.begin(), d.end());

  long long ans = 0;
  for (int e : c) {
    ans += upper_bound(d.begin(), d.end(), t - e) - lower_bound(d.begin(), d.end(), t - e);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}