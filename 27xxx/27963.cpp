#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double d1, d2, x; cin >> d1 >> d2 >> x;

  cout << fixed << setprecision(7) << (100 / x) * max(d1, d2) / ((100 - x) / x * max(d1, d2) / min(d1, d2) + 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}