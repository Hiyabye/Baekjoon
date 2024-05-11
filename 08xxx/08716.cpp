#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

long long solve(void) {
  long long x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  long long x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
  if ((x1 - x4) * (x2 - x3) >= 0 || (y1 - y4) * (y2 - y3) >= 0) return 0;

  long long x = min({x4 - x3, x2 - x1, abs(x1 - x4), abs(x2 - x3)});
  long long y = min({y3 - y4, y1 - y2, abs(y1 - y4), abs(y2 - y3)});
  return x * y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}