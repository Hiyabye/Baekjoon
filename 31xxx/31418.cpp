#include <algorithm>
#include <iostream>
#define MOD 998244353
using namespace std;

inline long long mul(long long a, long long b) {
  return (a * b) % MOD;
}

void solve(void) {
  int w, h, k, t; cin >> w >> h >> k >> t;

  long long ans = 1;
  while (k--) {
    int x, y; cin >> x >> y;
    long long a = min(x+t, w) - max(1, x-t) + 1;
    long long b = min(y+t, h) - max(1, y-t) + 1;
    ans = mul(ans, mul(a, b));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}