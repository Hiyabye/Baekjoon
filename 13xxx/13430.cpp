#include <iostream>
#define MOD 1000000007
using namespace std;

long long power(long long base, long long exp) {
  if (exp == 0) return 1;
  if (exp == 1) return base;
  long long half = power(base, exp / 2);
  if (exp % 2 == 0) return half * half % MOD;
  else return (half * half % MOD) * base % MOD;
}

long long c(int k, int n) {
  long long a = 1, b = 1;
  for (int i=0; i<n; i++) {
    a = a * (k-i) % MOD;
    b = b * (i+1) % MOD;
  }
  return a * power(b, MOD-2) % MOD;
}

void solve(void) {
  int k, n;
  cin >> k >> n;
  cout << c(k+n, k+1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}