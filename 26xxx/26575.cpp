#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double d, f, p; cin >> d >> f >> p;

  cout << fixed << setprecision(2) << "$" << d * f * p << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}