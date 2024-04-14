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
  int m; cin >> m;

  vector<long long> fac(2*m+1, 1);
  for (int i=1; i<=2*m; i++) fac[i] = fac[i-1] * i % MOD;
  vector<long long> facinv(2*m+1, power(fac[2*m], MOD-2));
  for (int i=2*m-1; i>=0; i--) facinv[i] = facinv[i+1] * (i+1) % MOD;

  long long ans = 0;
  for (int i=3; i<=m; i++) {
    ans = (ans + fac[2*i] * facinv[i] % MOD * facinv[i] % MOD) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}