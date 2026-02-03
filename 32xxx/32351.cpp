#include <iomanip>
#include <iostream>
using namespace std;

inline double calc(double m, double s) {
  return 240.0 * m / s;
}

void solve(void) {
  int n, k; double s0; cin >> n >> s0 >> k;

  double ans = 0.0, cur = 1.0;
  while (k--) {
    double m, s; cin >> m >> s;
    ans += calc(m - cur, s0);
    cur = m; s0 = s;
  }
  ans += calc(n + 1 - cur, s0);

  cout << fixed << setprecision(12) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}