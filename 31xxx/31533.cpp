#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  double m, n; cin >> m >> n;

  double ans = min({max(m, n / a), max(m / a, n), m / a * 2, n / a * 2});
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}