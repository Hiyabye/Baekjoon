#include <iostream>
#define MOD 1000000007
using namespace std;

inline long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long n, m; cin >> n >> m;

  if (m == 1) {
    cout << (power(2, n) - 1 + MOD) % MOD;
  } else {
    long long a = (power(2, n) - 1 + MOD) % MOD;
    cout << (2 * m % MOD * a % MOD - 1 + MOD) % MOD;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}