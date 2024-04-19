#include <iostream>
using namespace std;

long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

long long phi(long long x) {
  long long ret = x;
  for (long long i=2; i*i<=x; i++) {
    if (x % i) continue;
    ret -= ret / i;
    while (!(x % i)) x /= i;
  }
  if (x > 1) ret -= ret / x;
  return ret;
}

long long calc(long long n, long long m) {
  if (m == 1) return 0;
  if (n == 1) return 1;
  if (n < 4) return power(n, n-1, m);
  if (n == 4) return power(n, 9, m);
  return power(n, phi(m) + calc(n-1, phi(m)), m);
}

void solve(void) {
  long long n, m; cin >> n >> m;

  cout << calc(n, m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}