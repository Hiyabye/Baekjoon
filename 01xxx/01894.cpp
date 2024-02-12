#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double x1, y1, x2, y2, x3, y3, x4, y4;

  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
    double x = (x1 == x3 ? x2+x4-x1 : (x1 == x4 ? x2+x3-x1 : (x2 == x3 ? x1+x4-x2 : x1+x3-x2)));
    double y = (y1 == y3 ? y2+y4-y1 : (y1 == y4 ? y2+y3-y1 : (y2 == y3 ? y1+y4-y2 : y1+y3-y2)));
    cout << fixed << setprecision(3) << x << " " << y << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}