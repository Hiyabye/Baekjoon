#include <cmath>
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  long long n, b; cin >> n >> b;
  long long x = 0, y = 0;
  while (n--) {
    long long dx, dy; cin >> dx >> dy;
    x += dx; y += b - dy;
  }
  int sign = (x < 0) ^ (y < 0) ? 1 : -1;
  x = abs(x); y = abs(y);

  if (x == 0) {
    cout << "EZPZ";
  } else if (y % x == 0) {
    cout << y / x * sign;
  } else {
    long long g = gcd(x, y);
    cout << y / g * sign << "/" << x / g;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}