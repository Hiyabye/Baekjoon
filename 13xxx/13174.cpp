#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

vector<long long> fac, inv;

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
  fac.resize(2000001);
  inv.resize(2000001);

  fac[0] = 1;
  for (int i=1; i<=2000000; i++) {
    fac[i] = fac[i-1] * i % MOD;
  }

  inv[2000000] = power(fac[2000000], MOD-2);
  for (int i=1999999; i>=0; i--) {
    inv[i] = inv[i+1] * (i+1) % MOD;
  }
}

long long catalan(long long n) {
  return fac[2*n] * inv[n] % MOD * inv[n+1] % MOD;
}

void solve(void) {
  long long n, k; cin >> n >> k;

  long long cnt = (n-1)/2, ans = k * power(k+1, 2*cnt) % MOD;
  for (long long i=1; i<=cnt; i++) {
    ans = (ans + MOD - catalan(i) * power(k+1, 2*(cnt-i)) % MOD * power(k, i) % MOD) % MOD;
  }
  if (!(n & 1)) ans = ans * (k+1) % MOD;

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();
  solve();
  return 0;
}