#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  int cnt = 0, tot = 0;
  for (int mask=0; mask<(1<<n); mask++) {
    if (__builtin_popcount(mask) != m) continue;
    if (__builtin_popcount(mask & ((1<<m)-1)) >= k) cnt++;
    tot++;
  }
  cout << fixed << setprecision(10) << (double)cnt / tot;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}