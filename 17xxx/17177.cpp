#include <cmath>
#include <iostream>
using namespace std;

inline double calc(double a, double b, double c) {
  return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int solve(void) {
  int a, b, c; cin >> a >> b >> c;

  double ans = calc(a, 2 * b * c, a * (b * b + c * c - a * a));
  return ans < 0 ? -1 : ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}