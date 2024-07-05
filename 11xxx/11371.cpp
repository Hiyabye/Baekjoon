#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  int x, y; cin >> x >> y;
  if (x == 0 && y == 0) return false;

  cout << (int)(atan2(y, x) * 180 / M_PI + 0.5) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}