#include <iostream>
using namespace std;

void solve(void) {
  int t1, m1, t2, m2; cin >> t1 >> m1 >> t2 >> m2;

  int ans = (60 * (t2 - t1) + (m2 - m1) + 1440) % 1440;
  cout << ans << " " << ans / 30;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}