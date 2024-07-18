#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int x, y, d, t; cin >> x >> y >> d >> t;

  double dist = hypot(x, y);
  double a = dist;
  double b = floor(dist / d) * t + fmod(dist, d);
  double c = ceil(dist / d) * t + d - fmod(dist, d);
  double e = (max(1.0, floor(dist / d)) + 1) * t;

  cout << fixed << setprecision(10) << min({a, b, c, e});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}