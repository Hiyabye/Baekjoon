#include <iostream>
using namespace std;

#define MOD 1000000007

long long power(long long base, long long exp) {
  if (exp == 0) return 1;
  if (exp == 1) return base;
  long long half = power(base, exp/2);
  if (exp % 2 == 0) return half * half % MOD;
  return half * half % MOD * base % MOD;
}

void solve(void) {
  int n, k;
  cin >> n >> k;

  long long a = 1, b = 1;
  for (int i=1; i<=k; i++) {
    a = a * (n-i+1) % MOD;
    b = b * i % MOD;
  }
  cout << a * power(b, MOD-2) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}