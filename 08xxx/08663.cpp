#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int x, s; cin >> x >> s;

  int ans = 0, cur = 0, step = s;
  while (cur < x && step > 1) {
    cur += step;
    ans++;
    step >>= 1;
  }
  cout << ans + max(0, x - cur);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}