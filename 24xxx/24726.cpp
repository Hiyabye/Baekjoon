#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  double s = abs((x1*y2+x2*y3+x3*y1)-(y1*x2+y2*x3+y3*x1)) * M_PI / 3;

  cout << fixed << setprecision(7) << s*(y1+y2+y3) << " " << s*(x1+x2+x3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}