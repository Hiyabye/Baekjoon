#include <iostream>
using namespace std;

void solve(void) {
  long long n, r; cin >> n >> r;

  long long ans = 0, x = n - r;
  for (long long i=1; i*i<=x; i++) {
    if (x % i) continue;
    if (i > r) ans += i;
    if (x / i > r) ans += x / i;
    if (i == x / i && i > r) ans -= i;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}