#include <iostream>
using namespace std;

void solve(void) {
  int n, d; cin >> n >> d;

  int ans = 0;
  while (n--) {
    int v, f, c; cin >> v >> f >> c;
    if (v * f >= c * d) ans++;
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