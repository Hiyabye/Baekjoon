#include <algorithm>
#include <iostream>
using namespace std;

int solve(void) {
  int r, g, b; cin >> r >> g >> b;
  int cr, cg, cb; cin >> cr >> cg >> cb;
  int crg, cgb; cin >> crg >> cgb;

  r = max(0, r - cr);
  g = max(0, g - cg);
  b = max(0, b - cb);

  int ans = 0;
  if (r > crg) return -1;
  else ans += r, crg -= r;
  if (b > cgb) return -1;
  else ans += b, cgb -= b;
  if (g > crg + cgb) return -1;
  else ans += g;
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}