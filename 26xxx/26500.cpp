#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double a, b; cin >> a >> b;

  cout << fixed << setprecision(1) << abs(a-b) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}