#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double r1, r2, r3; cin >> r1 >> r2 >> r3;

  cout << fixed << setprecision(7) << (r1*r2*r3) / (r1*r2 + r2*r3 + r3*r1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}