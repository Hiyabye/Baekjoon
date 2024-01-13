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

void solve(void) {
  long long n, m; cin >> n >> m;

  long long ans = 1;
  for (int i=2; i*i<=n; i++) {
    if (n % i) continue;
    long long cnt = 0;
    while (n % i == 0) n /= i, cnt++;
    ans = ans * (power(i, cnt*m+1) - 1) % MOD * power(i-1, MOD-2) % MOD;
  }
  if (n > 1) ans = ans * (power(n, m+1) - 1) % MOD * power(n-1, MOD-2) % MOD;

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}