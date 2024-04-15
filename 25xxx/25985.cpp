#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double x, y; cin >> x >> y;

  cout << fixed << setprecision(7) << (x/y)/((100-x)/(100-y));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}