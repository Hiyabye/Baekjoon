#include <iostream>
#define MOD 1000003
using namespace std;

inline long long sub(long long a, long long b) {
  return (a - b + MOD) % MOD;
}

inline long long mul(long long a, long long b) {
  return a * b % MOD;
}

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = mul(ret, base);
    base = mul(base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long k; cin >> k;

  cout << mul(mul(sub(power(2, k), 1), sub(power(2, k), 2)), power(6, MOD-2));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}