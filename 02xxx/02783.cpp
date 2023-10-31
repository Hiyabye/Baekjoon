#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void solve(void) {
  double x, y; cin >> x >> y;
  int n; cin >> n;

  double ans = 1000.0 * x / y;
  for (int i=0; i<n; i++) {
    cin >> x >> y;
    ans = min(ans, 1000.0 * x / y);
  }
  cout << fixed << setprecision(2) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}