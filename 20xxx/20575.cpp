#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  double ans = 0;
  for (int i=0; i<n; i++) {
    double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    if ((int)floor(x1) != (int)floor(x2)) ans++;
  }
  cout << fixed << setprecision(7) << 2 / ans * n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}