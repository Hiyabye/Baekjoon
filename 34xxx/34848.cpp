#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n > 1) {
    if (n & 1) ans++;
    n = n / 2 + n % 2;
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