#include <cmath>
#include <iostream>
using namespace std;

int calc(double d) {
  for (int i=0; i<10; i++) {
    if (d <= 10 + 20 * i) return 10 - i;
  }
  return 0;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    int x, y; cin >> x >> y;
    ans += calc(hypot(x, y));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}