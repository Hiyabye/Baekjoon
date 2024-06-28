#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d, e, f, g, h;
  cin >> a >> b >> c >> d >> e >> f >> g >> h;

  a += e; b += f; c += g; d += h;
  if (a < 1) a = 1;
  if (b < 1) b = 1;
  if (c < 0) c = 0;

  cout << a + 5*b + 2*c + 2*d << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}