#include <iostream>
using namespace std;

void solve(void) {
  double m, s, g; cin >> m >> s >> g;
  double a, b; cin >> a >> b;
  double l, r; cin >> l >> r;

  cout << (s*b*(m*a+g*l) > g*a*(m*b+s*r) ? "latmask" : "friskus");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}