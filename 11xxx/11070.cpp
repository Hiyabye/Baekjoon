#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  unordered_map<int, int> c, d;
  while (m--) {
    int a, b, p, q; cin >> a >> b >> p >> q;
    c[a] += p; d[a] += q;
    c[b] += q; d[b] += p;
  }

  pair<int, int> ans = {0, 1e9};
  for (int i=1; i<=n; i++) {
    int w = (c[i] || d[i] ? 1000LL * c[i] * c[i] / (c[i] * c[i] + d[i] * d[i]) : 0);
    ans = {max(ans.first, w), min(ans.second, w)};
  }
  cout << ans.first << "\n" << ans.second << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}