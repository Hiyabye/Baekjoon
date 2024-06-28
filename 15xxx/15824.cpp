#include <iostream>
#include <vector>
#include <algorithm>
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
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans = (ans + (a[i] * power(2, i)) % MOD - (a[i] * power(2, n-i-1)) % MOD + MOD) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}