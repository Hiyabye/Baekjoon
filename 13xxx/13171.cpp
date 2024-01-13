#include <iostream>
#define MOD 1000000007
using namespace std;

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = (ret * base) % MOD;
    base = (base * base) % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long a; cin >> a;
  long long x; cin >> x;

  cout << power(a % MOD, x);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}