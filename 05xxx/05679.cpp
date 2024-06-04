#include <algorithm>
#include <iostream>
using namespace std;

bool solve(void) {
  int h; cin >> h;
  if (h == 0) return false;

  int ans = h;
  while (h != 1) {
    if (h & 1) h = 3 * h + 1;
    else h >>= 1;
    ans = max(ans, h);
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}