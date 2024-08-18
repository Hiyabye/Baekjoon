#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i*i<=n; i++) {
    if (n % i) continue;
    if (gcd(i, n / i) == 1) ans++;
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