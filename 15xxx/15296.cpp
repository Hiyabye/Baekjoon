#include <iostream>
using namespace std;

void solve(void) {
  long long k, b, n; cin >> k >> b >> n;

  long long ans = 0;
  while (n) {
    ans += (n % b) * (n % b);
    n /= b;
  }
  cout << k << " " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}