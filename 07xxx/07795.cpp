#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += lower_bound(b.begin(), b.end(), a[i]) - b.begin();
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