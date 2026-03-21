#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = 0, cur = (n >= m);
  for (int t=1; t<1440; t++) {
    if (t % n == 0 && t % m == 0) {
      ans++, cur = 1 - cur;
    } else if (t % n == 0) {
      if (cur == 1) ans++, cur = 0;
    } else if (t % m == 0) {
      if (cur == 0) ans++, cur = 1;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}