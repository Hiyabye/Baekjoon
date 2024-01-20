#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  int ans = 0;
  while (__builtin_popcount(n) > k) {
    int x = n & -n;
    n += x; ans += x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}