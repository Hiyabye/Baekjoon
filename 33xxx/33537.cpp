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

void solve(void) {
  long long p, q, e; cin >> p >> q >> e;
  long long c; cin >> c;

  long long n = p * q;
  long long phi = n - (p + q - 1);
  long long d = 0;
  while (d * e % phi != 1) d++;

  cout << power(c, d, n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}