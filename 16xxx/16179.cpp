#include <iostream>
#define MOD 9973
using namespace std;

inline int power(int base, int exp) {
  int ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int a = 45 * power(10, n-2) % MOD;
  int b = 225 * power(10, n-3) % MOD;
  int c = 1125 * power(10, n-4) % MOD;

  cout << (a + b + MOD - c) % MOD << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}