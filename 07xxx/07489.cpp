#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 1;
  for (int i=1; i<=n; i++) {
    ans *= i;
    while (ans % 10 == 0) ans /= 10;
    ans %= 100000;
  }
  cout << ans % 10 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}