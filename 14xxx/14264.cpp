#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int l; cin >> l;

  cout << fixed << setprecision(10) << sqrt(3) / 4 * l * l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}