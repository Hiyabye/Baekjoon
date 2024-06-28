#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double a, b, c; cin >> a >> b >> c;

  cout << fixed << setprecision(6) << (a*229*324*2 + b*297*420*2 + c*210*297) * 0.000001;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}