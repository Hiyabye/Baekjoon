#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

long long power(long long base, long long exp) {
  if (exp == 0) return 1;
  if (exp == 1) return base % MOD;
  long long half = power(base, exp / 2);
  if (exp % 2 == 0) return (half * half) % MOD;
  return (((half * half) % MOD) * base) % MOD;
}

void solve(vector<long long> &fac) {
  int n, k;
  cin >> n >> k;
  cout << (fac[n] * power((fac[k] * fac[n-k]) % MOD, MOD - 2)) % MOD << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  // precompute
  vector<long long> fac(4000001, 1);
  for (int i=1; i<=4000000; i++) {
    fac[i] = (fac[i-1] * i) % MOD;
  }

  int m;
  cin >> m;
  while (m--) {
    solve(fac);
  }
  return 0;
}