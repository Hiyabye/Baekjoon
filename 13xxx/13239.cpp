#include <iostream>
#include <vector>
#define MOD 1000000007
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

void precompute(int n) {
  fact.resize(n+1); fact[0] = 1;
  for (int i=1; i<=n; i++) {
    fact[i] = fact[i-1] * i % MOD;
  }

  inv.resize(n+1); inv[n] = power(fact[n], MOD-2);
  for (int i=n-1; i>=0; i--) {
    inv[i] = inv[i+1] * (i+1) % MOD;
  }
}

inline long long c(int n, int r) {
  return fact[n] * inv[r] % MOD * inv[n-r] % MOD;
}

void solve(void) {
  int n, k; cin >> n >> k;

  cout << c(n, k) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute(1000);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}