#include <iostream>
using namespace std;

bool ok(int x, int b) {
  while (x) {
    if (x % 10 >= b) return false;
    x /= 10;
  }
  return true;
}

int base(int x, int b) {
  int ret = 0, mul = 1;
  while (x) {
    ret += x % 10 * mul;
    mul *= b;
    x /= 10;
  }
  return ret;
}

int solve(void) {
  int p, q, r; cin >> p >> q >> r;

  for (int b=2; b<=16; b++) {
    if (!ok(p, b) || !ok(q, b) || !ok(r, b)) continue;
    if (base(p, b) * base(q, b) == base(r, b)) {
      return b;
    }
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}