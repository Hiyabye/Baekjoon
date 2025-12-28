#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double n, t; cin >> n >> t;
  double r, d, th, w; cin >> r >> d >> th >> w;

  th *= M_PI / 180.0; w /= 100.0;
  double x = (4 * cos(th / 2) + 2 * th) * w * n / t;

  cout << fixed << setprecision(7) << 2 * x << "\n" << x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}