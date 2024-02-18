#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  double ans = 0;
  for (int i=0; i<n; i++) {
    char t; cin >> t;
    if (t == 'C') {
      double r, h; cin >> r >> h;
      ans = max(ans, 1.0 / 3 * 3.14159 * r * r * h);
    } else if (t == 'L') {
      double r, h; cin >> r >> h;
      ans = max(ans, 3.14159 * r * r * h);
    } else {
      double r; cin >> r;
      ans = max(ans, 4.0 / 3 * 3.14159 * r * r * r);
    }
  }
  cout << fixed << setprecision(3) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}