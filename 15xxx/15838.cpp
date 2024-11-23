#include <iomanip>
#include <iostream>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  double ans = 0.0;
  while (n--) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    ans += a * 0.80 + b * 1.00 + c * 1.20 + d * 0.80;
    ans -= (a * 15.50 + b * 32.00 + c * 40.00) / 85 + d * 0.20;
  }
  cout << "Case #" << idx << ": RM" << fixed << setprecision(2) << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}