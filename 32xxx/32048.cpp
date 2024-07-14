#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  int ans = 1e9;
  for (int i=-1000; i<=1000; i++) {
    ans = min(ans, abs(x-i) + abs(y+i) + abs(i));
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}