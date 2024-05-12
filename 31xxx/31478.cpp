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
  int a, b, c; cin >> a >> b >> c;
  int k, l; cin >> k >> l;

  int d = (k + power(a, power(b, c, 6), 7)) % 7;
  int e = (k + power(b, c, 7) * power(a, 5, 7)) % 7;
  cout << (d == l) + (e == l) * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}