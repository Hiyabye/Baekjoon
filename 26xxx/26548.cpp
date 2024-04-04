#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double a, b, c; cin >> a >> b >> c;

  cout << fixed << setprecision(3) << (-b+sqrt(b*b-4*a*c))/(2*a) << ", " << (-b-sqrt(b*b-4*a*c))/(2*a) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}