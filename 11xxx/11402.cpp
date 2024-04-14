#include <iostream>
#include <vector>
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

long long solve(void) {
  long long n, k, m; cin >> n >> k >> m;

  vector<long long> fac(m+1, 1);
  for (int i=1; i<=m; i++) fac[i] = fac[i-1] * i % m;

  long long ans = 1;
  while (n || k) {
    if (n % m < k % m) return 0;
    ans = (ans * fac[n%m] % m) * power(fac[k%m] * fac[n%m-k%m] % m, m-2, m) % m;
    n /= m; k /= m;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}