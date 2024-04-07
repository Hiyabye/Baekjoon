#include <iomanip>
#include <iostream>
using namespace std;

double solve(double x, double y) {
  double z; char q; cin >> z >> q;

  return z * (q == 'A' ? y / x : x / y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double x, y; cin >> x >> y;
  int n; cin >> n;
  while (n--) cout << fixed << setprecision(5) << solve(x, y) << "\n";
  return 0;
}