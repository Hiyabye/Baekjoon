#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

long long c(long long n, long long k, vector<long long>& fac) {
  return fac[n] * power(fac[k], MOD-2) % MOD * power(fac[n-k], MOD-2) % MOD;
}

void solve(void) {
  int n, k; cin >> n >> k;

  vector<long long> fac(2*n+1, 1);
  for (int i=1; i<=2*n; i++) fac[i] = fac[i-1] * i % MOD;

  long long ans = power(n, k);
  for (int i=0; i<n; i++) ans = (ans + power(i, k) * (c(2*n, n-i, fac) - c(2*n, n-i-1, fac) + MOD) % MOD) % MOD;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}