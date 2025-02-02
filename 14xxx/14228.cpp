#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; double c; cin >> n >> c;
  vector<double> t(n), x(n);
  for (int i=0; i<n; i++) cin >> t[i];
  for (int i=0; i<n; i++) cin >> x[i];

  double lo = 0.0, hi = 1e9;
  for (int i=0; i<100; i++) {
    double mid = (lo + hi) / 2;
    double cur = 0, mx = 0;
    for (int j=0; j<n; j++) {
      cur = max(0.0, cur + (x[j] - mid) * t[j]);
      mx = max(mx, cur);
    }
    if (mx <= c) hi = mid;
    else lo = mid;
  }
  cout << fixed << setprecision(10) << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}