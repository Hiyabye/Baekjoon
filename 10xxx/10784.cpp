#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int p, a, b, c, d, n;
  cin >> p >> a >> b >> c >> d >> n;

  double ans = 0, mx = -1e9;
  for (int k=1; k<=n; k++) {
    double x = p * (sin(a * k + b) + cos(c * k + d) + 2);
    mx = max(mx, x);
    ans = max(ans, mx - x);
  }
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}