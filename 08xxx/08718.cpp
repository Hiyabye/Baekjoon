#include <iostream>
using namespace std;

void solve(void) {
  int x, k; cin >> x >> k;

  int ans = 0;
  if (1750 * k <= 1000 * x) ans = 1750 * k;
  if (3500 * k <= 1000 * x) ans = 3500 * k;
  if (7000 * k <= 1000 * x) ans = 7000 * k;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}