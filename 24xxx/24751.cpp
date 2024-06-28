#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double a; cin >> a;

  cout << fixed << setprecision(4) << 100 / a << "\n" << 100 / (100 - a);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}