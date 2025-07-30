#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<bool> v(n+1, false);
  while (m--) {
    int x; cin >> x;
    v[x] = true;
  }

  int ans = 0, prev = -1e9;
  for (int i=1; i<=n; i++) {
    if (v[i]) continue;
    ans += min(7, (i-prev)*2);
    prev = i;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}