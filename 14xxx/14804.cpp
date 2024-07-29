#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(int idx) {
  int d, n; cin >> d >> n;

  double ans = 1e18;
  while (n--) {
    int k, s; cin >> k >> s;
    ans = min(ans, (double)d / (d - k) * s);
  }
  cout << fixed << setprecision(7) << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}