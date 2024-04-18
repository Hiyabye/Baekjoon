#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double a; cin >> a;

  cout << fixed << setprecision(10) << pow(2 * sqrt(a / acos(-1)) + 2, 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}