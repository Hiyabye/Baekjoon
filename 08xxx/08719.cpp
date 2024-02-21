#include <iostream>
using namespace std;

void solve(void) {
  int x, w; cin >> x >> w;

  int ans = 0;
  while (x < w) {
    x <<= 1;
    ans++;
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