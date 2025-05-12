#include <iostream>
#include <vector>
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
  int n, m; cin >> n >> m;

  vector<long long> f(n+1); f[0] = 1;
  for (int i=1; i<=n; i++) f[i] = f[i-1] * i % MOD;
  vector<long long> inv(n+1); inv[n] = power(f[n], MOD-2);
  for (int i=n-1; i>=0; i--) inv[i] = inv[i+1] * (i+1) % MOD;

  cout << f[n] * inv[m] % MOD * inv[n-m] % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}