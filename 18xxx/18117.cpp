#include <iostream>
using namespace std;

__int128 power(__int128 base, __int128 exp, __int128 mod) {
  __int128 ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long a, b; cin >> a >> b;
  long long i, n; cin >> i >> n;

  for (long long j=0; j<n; j++) {
    cout << (long long)((power(10, i+j-1, b) * a % b) * 10 / b);
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}