#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 1, k = 5;
  while (n > k) ans++, k *= 5;

  cout << "MIT";
  if (ans > 1) cout << "^" << ans;
  cout << " time\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}