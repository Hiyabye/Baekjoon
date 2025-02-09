#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int r, g, b; cin >> r >> g >> b;

  int ans = min({r, g, b});
  r -= ans; g -= ans; b -= ans;
  ans += r / 3; r %= 3;
  ans += g / 3; g %= 3;
  ans += b / 3; b %= 3;

  if (r + g + b == 2) cout << ans + 1;
  else cout << ans + (r+2)/3 + (g+2)/3 + (b+2)/3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}