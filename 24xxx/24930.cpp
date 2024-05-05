#include <iostream>
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
  long long n, m; cin >> n >> m;
  if (n == 0) return 2 % m;
  if (n == 1) return 4 % m;

  return (power(2, n-2, m) * 10 % m + m - 1) % m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}