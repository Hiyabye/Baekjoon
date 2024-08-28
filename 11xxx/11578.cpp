#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(m, 0);
  for (int i=0; i<m; i++) {
    int o; cin >> o;
    while (o--) {
      int p; cin >> p;
      v[i] |= (1 << p);
    }
  }

  int ans = 1e9;
  for (int mask=0; mask<(1<<m); mask++) {
    int x = 0;
    for (int i=0; i<m; i++) {
      if (mask & (1 << i)) x |= v[i];
    }
    if (__builtin_popcount(x) == n) {
      ans = min(ans, __builtin_popcount(mask));
    }
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}