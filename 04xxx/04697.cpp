#include <iostream>
using namespace std;

bool solve(void) {
  int n, w, l, h, a, m; cin >> n >> w >> l >> h >> a >> m;
  if (n == 0 && w == 0 && l == 0 && h == 0 && a == 0 && m == 0) return false;

  int ans = w * l * n + 2 * (w + l) * h * n;
  while (m--) {
    int x, y; cin >> x >> y;
    ans -= x * y * n;
  }
  cout << (ans + a - 1) / a << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}