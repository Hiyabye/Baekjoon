#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, r, x; cin >> n >> r >> x;

  int ans = 0, cur = 0;
  while (n--) {
    int a; cin >> a;
    cur = min(r, cur + a);
    ans += min(cur, x);
    cur = max(0, cur - x);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}