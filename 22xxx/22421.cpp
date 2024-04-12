#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

bool solve(void) {
  int d, e; cin >> d >> e;
  if (d == 0 && e == 0) return false;

  double ans = 1e9;
  for (int i=0; i<=d; i++) {
    ans = min(ans, abs(sqrt(i*i+(d-i)*(d-i))-e));
  }
  cout << fixed << setprecision(4) << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}