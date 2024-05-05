#include <iostream>
#define MOD 10007
using namespace std;

int power(int base, int exp) {
  int ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  cout << (power(2, n-1) + power(2, 2*n-2)) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}