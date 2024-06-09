#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double k, p, x; cin >> k >> p >> x;

  double ans = 1e9;
  for (int i=1; i<=10000; i++) {
    ans = min(ans, k * p / i + x * i);
  }
  cout << fixed << setprecision(3) << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}