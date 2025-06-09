#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

inline double dist(double x1, double y1, double x2, double y2) {
  return hypot(abs(x1 - x2), abs(y1 - y2));
}

void solve(void) {
  double ax, ay, bx, by, px, py, r; cin >> ax >> ay >> bx >> by >> px >> py >> r;

  double ans1 = dist(ax, ay, bx, by), ans2;
  if (dist(ax, ay, px, py) <= r && dist(bx, by, px, py) <= r) {
    cout << 0;
  } else {
    ans2 = max(0.0, dist(ax, ay, px, py) - r) + max(0.0, dist(bx, by, px, py) - r);
    cout << fixed << setprecision(10) << min(ans1, ans2);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}