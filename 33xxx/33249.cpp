#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  long double d, h; cin >> d >> h;
  long double r = d / 2 + 5;

  cout << fixed << setprecision(7) << M_PI * r * r + M_PI * r * h * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}