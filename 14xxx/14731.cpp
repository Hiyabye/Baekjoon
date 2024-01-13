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
  int n; cin >> n;

  long long ans = 0;
  while (n--) {
    long long c, k; cin >> c >> k;
    if (k == 0) continue;
    ans = (ans + c * k % MOD * power(2, k-1) % MOD) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}