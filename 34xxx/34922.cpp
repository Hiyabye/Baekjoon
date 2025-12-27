#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int w, h; cin >> w >> h;
  int r; cin >> r;

  cout << fixed << setprecision(3) << w * h - M_PI_4 * r * r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}