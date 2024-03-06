#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  vector<bool> p(n, false);
  for (int i=n/2; i<n; i++) p[i] = true;

  double ans = 1e9;
  do {
    double x_sum = 0, y_sum = 0;
    for (int i=0; i<n; i++) {
      x_sum += (p[i] ? -1 : 1) * x[i];
      y_sum += (p[i] ? -1 : 1) * y[i];
    }
    ans = min(ans, hypot(x_sum, y_sum));
  } while (next_permutation(p.begin(), p.end()));

  cout << fixed << setprecision(7) << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}