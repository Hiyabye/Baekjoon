#include <iomanip>
#include <iostream>
using namespace std;

inline double calc(double a, double b, double c, double d) {
  if (b != d) return d - b - 0.5 + c / 12;
  if (a != c) return (c - a) / (12 - a) / 2;
  return 0.0;
}

void solve(void) {
  double a, b, c, d; cin >> a >> b >> c >> d; a--; c--;

  cout << fixed << setprecision(4) << calc(a, b, c, d) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}