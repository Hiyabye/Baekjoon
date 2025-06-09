#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  int q; cin >> q;
  while (q--) {
    int x, y, t1, t2, t3; cin >> x >> y >> t1 >> t2 >> t3;
    int a = abs(x - x1) + abs(y - y1);
    if (a % t1 != 0) a += t1 - a % t1;
    int b = abs(x - x2) + abs(y - y2);
    if (b % t2 != 0) b += t2 - b % t2;
    int c = abs(x - x3) + abs(y - y3);
    if (c % t3 != 0) c += t3 - c % t3;
    cout << min({a, b, c}) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}