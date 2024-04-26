#include <iostream>
#define MOD 1000000007
using namespace std;

inline long long addmod(long long a, long long b) {
  return (a + b) % MOD;
}

inline long long submod(long long a, long long b) {
  return (a - b + MOD) % MOD;
}

inline long long mulmod(long long a, long long b) {
  return (a * b) % MOD;
}

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = mulmod(ret, base);
    base = mulmod(base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long n, a; cin >> n >> a;

  cout << mulmod(n, addmod(submod(mulmod(n-1, power(n, a)), power(n-1, a+1)), power(n-1, a)));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}