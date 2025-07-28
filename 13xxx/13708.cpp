#include <cmath>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  double px = accumulate(x.begin(), x.end(), 0.0) / n;
  double py = accumulate(y.begin(), y.end(), 0.0) / n;

  double delta = 0.1, r = 0;
  for (int i=0; i<100000; i++) {
    int idx = 0; r = 0;
    for (int j=0; j<n; j++) {
      double d = hypot(px-x[j], py-y[j]);
      if (d > r) r = d, idx = j;
    }
    px += (x[idx] - px) * delta;
    py += (y[idx] - py) * delta;
    delta *= 0.999;
  }
  cout << fixed << setprecision(2) << r * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}