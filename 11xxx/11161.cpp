#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int m; cin >> m;

  int ans = 0, cur = 0;
  while (m--) {
    int p1, p2; cin >> p1 >> p2;
    cur = cur - p1 + p2;
    ans = max(ans, cur);
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