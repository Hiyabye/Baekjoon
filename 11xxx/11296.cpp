#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

inline double dot(double a, char b) {
  switch (b) {
    case 'R': return a * 0.55;
    case 'G': return a * 0.7;
    case 'B': return a * 0.8;
    case 'Y': return a * 0.85;
    case 'O': return a * 0.9;
    case 'W': return a * 0.95;
  }
  return a;
}

inline double coupon(double a, char c) {
  return c == 'C' ? a * 0.95 : a;
}

inline double cash(double a, char d) {
  return d == 'P' ? a : a - fmod(a, 0.1) + (fmod(a, 0.1) > 0.05 ? 0.1 : 0);
}

void solve(void) {
  double a; char b, c, d; cin >> a >> b >> c >> d;

  cout << fixed << setprecision(2) << "$" << cash(coupon(dot(a, b), c), d) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}