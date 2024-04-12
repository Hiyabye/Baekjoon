#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double p, q; cin >> p >> q;

  cout << "f = " << fixed << setprecision(1) << p*q/(p+q) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}