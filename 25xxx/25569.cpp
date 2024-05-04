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

void solve(void) {
  int n; cin >> n;

  vector<long long> fact(600001); fact[0] = 1;
  for (int i=1; i<=600000; i++) {
    fact[i] = fact[i-1] * i % MOD;
  }

  vector<long long> inv(600001); inv[600000] = power(fact[600000], MOD-2);
  for (int i=599999; i>=0; i--) {
    inv[i] = inv[i+1] * (i+1) % MOD;
  }

  long long ans = 1;
  while (n--) {
    long long a, b; cin >> a >> b;
    ans = ans * (fact[a+b] * inv[a] % MOD * inv[b] % MOD - 1 + MOD) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}