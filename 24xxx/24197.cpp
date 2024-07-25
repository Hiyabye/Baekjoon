#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = 0, cur = 1;
  while (m--) {
    int x; cin >> x;
    ans += min((cur-x+n) % n, (x-cur+n) % n);
    cur = x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}