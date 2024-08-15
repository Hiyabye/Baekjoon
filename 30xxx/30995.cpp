#include <iostream>
#include <vector>
#define MOD 998244353
using namespace std;

vector<long long> fact, inv;

inline long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

inline long long c(int n, int r) {
  return fact[n] * inv[r] % MOD * inv[n-r] % MOD;
}

inline long long f(int n, int x) {
  return c(n, x) * power(25, n-x) % MOD;
}

void solve(void) {
  int n, m; cin >> n >> m;

  fact.resize(n+1); fact[0] = 1;
  for (int i=1; i<=n; i++) {
    fact[i] = fact[i-1] * i % MOD;
  }

  inv.resize(n+1); inv[n] = power(fact[n], MOD-2);
  for (int i=n-1; i>=0; i--) {
    inv[i] = inv[i+1] * (i+1) % MOD;
  }

  long long ans = f(n, m) * f(n, m) % MOD;
  for (int i=m+1; i<=n; i++) {
    ans = (ans + 2 * f(n, m) * f(n, i) % MOD) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}