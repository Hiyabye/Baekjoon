#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double area, base; cin >> area >> base;

  cout << fixed << setprecision(2) << "The height of the triangle is " << area * 2 / base << " units\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}