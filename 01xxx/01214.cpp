#include <algorithm>
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}

void solve(void) {
  long long d, p, q; cin >> d >> p >> q;
  if (p < q) swap(p, q);

  long long a = lcm(p, q);
  long long b = max(0LL, d / a - 1) * a; d -= b;
  long long c = 1e18;
  for (long long i=0; i<=(d+p-1)/p; i++) {
    long long j = (d - i * p + q - 1) / q;
    c = min(c, b + i * p + j * q);
  }
  cout << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}