#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

typedef struct {
  double x, y;
} Point;

inline double dist(Point a, Point b) {
  return hypot(a.x - b.x, a.y - b.y);
}

void solve(void) {
  Point a, b, c, d;
  cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;

  cout << fixed << setprecision(7) << max(dist(a, b), dist(c, d));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}