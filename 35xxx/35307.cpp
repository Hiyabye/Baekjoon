#include <iostream>
using namespace std;

inline long long calc(long long x, long long a, long long b) {
  return (x - 1 + a + b - 1) / (a + b);
}

void solve(void) {
  long long n, m, l, r, u, d; cin >> n >> m >> l >> r >> u >> d;

  if (l || r) {
    if (u || d) cout << n * m << " " << calc(m, l, r) + calc(n, u, d);
    else cout << m << " " << calc(m, l, r);
  } else {
    if (u || d) cout << n << " " << calc(n, u, d);
    else cout << "1 0";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}