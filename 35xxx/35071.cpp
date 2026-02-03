#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double d; cin >> d;

  cout << fixed << setprecision(10) << d * M_PI_2 - d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}