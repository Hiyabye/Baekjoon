#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int d, vf, vg;

  while (cin >> d >> vf >> vg) {
    cout << (hypot(d, 12) * vf > 12 * vg ? "N" : "S") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}