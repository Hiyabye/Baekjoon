#include <iostream>
#define MOD 1000000007
using namespace std;

long long calc(long long x, long long k) {
  long long ret = 0;
  for (long long p=1; k; k>>=1) {
    if (k & 1) ret = (ret + p) % MOD;
    p = p * x % MOD;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  long long ans = 0;
  while (n--) {
    long long x, k; cin >> x >> k;
    ans = (ans + calc(x, k)) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}