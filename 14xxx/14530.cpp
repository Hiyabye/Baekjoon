#include <iostream>
using namespace std;

int solve(void) {
  int x, y; cin >> x >> y;

  int ans = 0, p = 0;
  while (true) {
    if (p & 1) {
      if (x-(1<<p) <= y && y <= x) return ans + x - y;
    } else {
      if (x <= y && y <= x+(1<<p)) return ans + y - x;
    }
    ans += (1<<(++p));
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}