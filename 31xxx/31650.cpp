#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> c(n), t(n), p(n);
  for (int i=0; i<n; i++) cin >> c[i];
  for (int i=0; i<n; i++) cin >> t[i];
  for (int i=0; i<n; i++) p[i] = c[i] - t[i];
  sort(p.begin(), p.end());

  while (q--) {
    int v, s; cin >> v >> s;
    int idx = n - distance(p.begin(), lower_bound(p.begin(), p.end(), s+1));
    cout << (idx >= v ? "YES" : "NO") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}