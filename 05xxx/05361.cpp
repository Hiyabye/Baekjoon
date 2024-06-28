#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

  double ans = 0.0;
  ans += a * 350.34;
  ans += b * 230.90;
  ans += c * 190.55;
  ans += d * 125.30;
  ans += e * 180.90;

  cout << "$" << fixed << setprecision(2) << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}