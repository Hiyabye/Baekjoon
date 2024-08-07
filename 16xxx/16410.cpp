#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int x, y, x1, y1, x2, y2;
  cin >> x >> y >> x1 >> y1 >> x2 >> y2;

  int dx = max({0, x1-x, x-x2});
  int dy = max({0, y1-y, y-y2});
  cout << fixed << setprecision(4) << hypot(dx, dy);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}