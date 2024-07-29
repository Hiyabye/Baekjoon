#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, s; cin >> n >> s;

  int ans = 0;
  while (n--) {
    int t; cin >> t;
    ans = max(ans, (t * s + 999) / 1000);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int m; cin >> m;
  while (m--) solve();
  return 0;
}