#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int Xlo, Xhi, Ylo, Yhi, Zlo, Zhi; cin >> Xlo >> Xhi >> Ylo >> Yhi >> Zlo >> Zhi;
  int xlo, xhi, ylo, yhi, zlo, zhi; cin >> xlo >> xhi >> ylo >> yhi >> zlo >> zhi;

  if (max(Xlo, xlo) >= min(Xhi, xhi) ||
      max(Ylo, ylo) >= min(Yhi, yhi) ||
      Zlo - zhi + 1 > Zhi - zlo - 1) {
    cout << -1;
  } else {
    cout << Zlo - zhi + 1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}