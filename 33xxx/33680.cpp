#include <iostream>
#define MOD 1000000007
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
  long long p, n; cin >> p >> n;

  cout << (power(p, n, MOD)-1) * power(p-1, MOD-2, MOD) % MOD << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) solve();
  return 0;
}