#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void solve(void) {
  double a; cin >> a;

  cout << fixed << setprecision(10) << sqrt(a/acos(-1)) * 2 * acos(-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}