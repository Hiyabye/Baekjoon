#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  double ans = 0;
  for (int i=0; i<n; i++) {
    double q, y; cin >> q >> y;
    ans += q * y;
  }
  cout << fixed << setprecision(4) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}