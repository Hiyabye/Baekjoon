#include <iostream>
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

long long c(long long n, long long r) {
  long long ret = 1;
  for (int i=1; i<=r; i++) ret = ret * (n-r+i) % MOD * power(i, MOD-2) % MOD;
  return ret;
}

void solve(void) {
  int n, r; cin >> n >> r;

  cout << c(n, r);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}