#include <iostream>
using namespace std;

int calc(int a, int b) {
  int ret = 0;
  while (!(a % b)) a /= b, ret++;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=2; i<=n; i++) {
    ans += calc(n, i);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}