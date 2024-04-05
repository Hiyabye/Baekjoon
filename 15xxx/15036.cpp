#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  double ans = 0;
  while (n--) {
    int x; cin >> x;
    ans += (x ? 1.0 / x : 2);
  }
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}