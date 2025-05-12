#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

inline double dist(int x1, int y1, int z1, int x2, int y2, int z2) {
  return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2) + pow(z1-z2, 2));
}

void solve(void) {
  int n, r; cin >> n >> r;
  vector<int> x(n), y(n), z(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i] >> z[i];

  double ans = 4.0 * M_PI * pow(r, 3) / 3 * n;
  for (int i=0; i<n; i++) {
    double d = dist(x[i], y[i], z[i], x[(i+1)%n], y[(i+1)%n], z[(i+1)%n]);
    ans -= 2.0 / 3 * M_PI * pow(r-d/2, 2) * (2*r+d/2);
  }
  cout << fixed << setprecision(8) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}