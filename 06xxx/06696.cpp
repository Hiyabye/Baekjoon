#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  double x, y; cin >> x >> y;
  if (x == 0 && y == 0) return false;

  cout << "The property will be flooded in hour " << (int)ceil((x*x+y*y) * M_PI / 100) << ".\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}