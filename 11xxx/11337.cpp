#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double r, b; cin >> r >> b;

  cout << fixed << setprecision(3) << ((sqrt(2) * r <= b) ? 2*r*r : b*sqrt(4*r*r-b*b)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}