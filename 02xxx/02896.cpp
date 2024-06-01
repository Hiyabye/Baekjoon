#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double a, b, c; cin >> a >> b >> c;
  double i, j, k; cin >> i >> j >> k;

  double r = min({a / i, b / j, c / k});
  a = max(0.0, a - i * r);
  b = max(0.0, b - j * r);
  c = max(0.0, c - k * r);

  cout << fixed << setprecision(5) << a << " " << b << " " << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}