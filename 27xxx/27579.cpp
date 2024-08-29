#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int h, k, v, s; cin >> h >> k >> v >> s;

  int ans = 0;
  while (h > 0) {
    v += s;
    v -= max(1, v / 10);
    if (v >= k) {
      h++;
    } else if (v > 0) {
      if (--h == 0) v = 0;
    } else {
      h = 0, v = 0;
    }
    ans += v;
    if (s > 0) s--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}