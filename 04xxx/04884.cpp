#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  long long g, a, t, d; cin >> g >> t >> a >> d;
  if (g == -1 && t == -1 && a == -1 && d == -1) return false;

  long long u = g * a + d;
  long long p = 1LL << (long long)ceil(log2((double)u));
  long long x = t * (t - 1) / 2 * g + p - 1;
  long long y = (d > 0) ? (p - u) : 0;

  cout << g << "*" << a << "/" << t << "+" << d << "=" << x << "+" << y << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}