#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int g, gb, y, r, ry; cin >> g >> gb >> y >> r >> ry;
  int t; cin >> t;

  int a = 0, b = 0, c = 0, d = 0;
  while (d < t) {
    int e = min(g, t - d); c += e; d += e;
    if (d >= t) break;
    e = min(gb, t - d); c += e / 2; d += e;
    if (d >= t) break;
    e = min(y, t - d); b += e; d += e;
    if (d >= t) break;
    e = min(r, t - d); a += e; d += e;
    if (d >= t) break;
    e = min(ry, t - d); a += e; b += e; d += e;
  }
  cout << a << " " << b << " " << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}