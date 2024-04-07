#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n, k, x, y; cin >> n >> k >> x >> y;

  int ans = 0;
  while (n--) {
    int a, b; cin >> a >> b;
    if (hypot(a-x, b-y) > k) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}