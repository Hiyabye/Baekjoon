#include <iostream>
#define MOD 998244353
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
  int n, k; cin >> n >> k;

  long long ans = 0;
  for (int i=2; i<=k+1; i++) {
    ans = (ans + power(i, n)) % MOD;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}