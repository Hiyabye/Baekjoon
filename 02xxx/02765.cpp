#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

bool solve(int idx) {
  double a, b, c; cin >> a >> b >> c;
  if (b == 0) return false;

  double ans = a * b * acos(-1) / 5280 / 12;
  cout << fixed << setprecision(2) << "Trip #" << idx << ": " << ans << " " << ans / c * 3600 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}