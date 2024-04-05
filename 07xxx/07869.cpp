#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

inline double th(double a, double b, double c) {
  return acos((a * a + b * b - c * c) / (2 * a * b));
}

double solve(void) {
  double x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

  double d = hypot(x2 - x1, y2 - y1);
  if (r1 + r2 < d) return 0;
  if (abs(r1 - r2) >= d) return pow(min(r1, r2), 2) * acos(-1);
  return pow(r1, 2) * (th(r1, d, r2) * 2 - sin(th(r1, d, r2) * 2)) / 2
       + pow(r2, 2) * (th(r2, d, r1) * 2 - sin(th(r2, d, r1) * 2)) / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << fixed << setprecision(3) << solve();
  return 0;
}