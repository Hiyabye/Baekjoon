#include <cmath>
#include <iostream>
using namespace std;

inline double dist(double x1, double y1, double x2, double y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

inline bool check(double w, double h, double x, double y, double a, double b) {
  if (x <= a && a <= x + w && y <= b && b <= y + h) return true;
  if (a <= x && dist(x, y+h/2, a, b) <= h/2) return true;
  if (a >= x + w && dist(x+w, y+h/2, a, b) <= h/2) return true;
  return false;
}

void solve(void) {
  double w, h, x, y; int p; cin >> w >> h >> x >> y >> p;

  int ans = 0;
  while (p--) {
    double a, b; cin >> a >> b;
    if (check(w, h, x, y, a, b)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}