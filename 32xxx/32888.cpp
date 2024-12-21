#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double a, b; cin >> a >> b;

  cout << fixed << setprecision(9) << hypot(a, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}