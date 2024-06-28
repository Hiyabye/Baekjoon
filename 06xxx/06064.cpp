#include <iostream>
using namespace std;

void solve(void) {
  int m, n, x, y; cin >> m >> n >> x >> y;

  int ans = -1;
  for (int i=x; i<=m*n; i+=m) {
    if ((i-y) % n == 0) {
      ans = i;
      break;
    }
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