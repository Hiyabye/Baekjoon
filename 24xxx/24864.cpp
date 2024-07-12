#include <iostream>
#define MOD 998244353
using namespace std;

long long fac[200001], inv[200001];

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void precompute(void) {
  fac[0] = 1;
  for (int i=1; i<=200000; i++) fac[i] = fac[i-1] * i % MOD;
  inv[200000] = power(fac[200000], MOD-2);
  for (int i=199999; i>=0; i--) inv[i] = inv[i+1] * (i+1) % MOD;
}

long long c(long long n, long long r) {
  return fac[n] * inv[r] % MOD * inv[n-r] % MOD;
}

void solve(void) {
  int n, m; cin >> n >> m;

  long long a = c(n+m-2, m-1) * c(n+m-2, m-1) % MOD;
  long long b = c(n+m-2, m-2) * c(n+m-2, n-2) % MOD;

  cout << (a - b + MOD) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();
  solve();
  return 0;
}