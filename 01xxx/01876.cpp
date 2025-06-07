#include <cmath>
#include <iostream>
using namespace std;

inline double rad(double x) {
  return x * M_PI / 180.0;
}

bool solve(void) {
  double t, x; cin >> t >> x;

  double l = t * 100 - 16.0 / sin(rad(x));
  double r = t * 100 + 16.0 / sin(rad(x));
  double d = 85.0 / tan(rad(x));

  double cur = 0.0;
  while (cur < r) {
    if (l < cur && cur < r) return true;
    cur += d;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "yes" : "no") << "\n";
  return 0;
}