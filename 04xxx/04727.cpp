#include <algorithm>
#include <iostream>
using namespace std;

inline double l(double b, double c, double d) {
  return 9 * max(b - 0.5, 0.0) + 4 * (max(c - 0.5, 0.0) + max(d - 0.5, 0.0));
}

inline double r(double b, double c, double d) {
  return 9 * (b + 0.5) + 4 * (c + 0.5 + d + 0.5);
}

bool solve(void) {
  double a, b, c, d; cin >> a >> b >> c >> d;
  if (a == 0 && b == 0 && c == 0 && d == 0) return false;

  cout << (l(b, c, d) <= a && a <= r(b, c, d) ? "yes" : "no") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}