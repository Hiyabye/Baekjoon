#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  double a, b; cin >> a >> b;

  double phi = (1 + sqrt(5)) / 2;
  return abs(a / b - phi) <= phi / 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "golden" : "not") << "\n";
  return 0;
}