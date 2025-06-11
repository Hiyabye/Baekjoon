#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double a, b, h; cin >> a >> b >> h;
  if (a == b) { cout << -1; return; }
  if (a > b) swap(a, b);

  double ans  = pow(b/(b-a)*h, 2) + pow(b, 2);
  if (a) ans -= pow(a/(b-a)*h, 2) + pow(a, 2);
  cout << fixed << setprecision(7) << ans * M_PI;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}