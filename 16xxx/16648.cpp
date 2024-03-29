#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double t, p; cin >> t >> p;

  cout << fixed << setprecision(5) << (p >= 20 ? t*(p+20)/(100-p) : 2*t*p/(120-2*p));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}