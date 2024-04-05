#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  int ans = 0;
  for (int x : a) if (find(b.begin(), b.end(), x) != b.end()) ans++;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}