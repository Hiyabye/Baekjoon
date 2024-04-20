#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0, prev = 0;
  while (n--) {
    int t, m; cin >> t >> m;
    if (m == 0) continue;
    ans = max(ans, t - prev);
    prev = t;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}