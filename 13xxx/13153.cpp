#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  double r; cin >> r;

  double a = hypot(x1-x2, y1-y2);
  double b = hypot(x2-x3, y2-y3);
  double c = hypot(x3-x1, y3-y1);

  double d = 4*a*a*b*b;
  double e = a*a+b*b-c*c;

  cout << fixed << setprecision(4) << (sqrt(d-e*e)/(2*(a+b+c))-r)/r*100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}