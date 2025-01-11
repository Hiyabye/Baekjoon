#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long yp, lp, ys, ls; cin >> yp >> lp >> ys >> ls;

  cout << min({yp*ys, (yp+abs(lp-yp))*ls, abs(lp-yp)*ys+lp*ls}) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}