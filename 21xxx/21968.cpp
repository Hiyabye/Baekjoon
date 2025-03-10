#include <iostream>
using namespace std;

long long power(long long a, long long b) {
  long long ret = 1;
  while (b) {
    if (b & 1) ret *= a;
    a *= a;
    b >>= 1;
  }
  return ret;
}

void solve(void) {
  long long n; cin >> n;

  long long ans = 0;
  for (int i=0; i<60; i++) {
    if (n & (1LL << i)) {
      ans += power(3, i);
    }
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