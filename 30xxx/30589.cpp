#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  vector<double> d(n);
  d[0] = hypot(x[0]-x[n-1], y[0]-y[n-1]);
  for (int i=1; i<n; i++) {
    d[i] = hypot(x[i]-x[i-1], y[i]-y[i-1]);
  }
  cout << fixed << setprecision(7) << accumulate(d.begin(), d.end(), 0.0) - *max_element(d.begin(), d.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}