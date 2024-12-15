#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long l = 0, r = 1e9, ans = 0;
  while (l <= r) {
    long long m = (l + r) / 2;
    if (m * (m + 1) / 2 <= n) {
      l = m + 1;
      ans = m;
    } else {
      r = m - 1;
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