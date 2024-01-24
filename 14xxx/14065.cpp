#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double x; cin >> x;

  cout << fixed << setprecision(7) << 100.00 / (1.609344 / 3.785411784 * x);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}