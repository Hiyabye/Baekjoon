#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void solve(void) {
  long long b, c, a1, a2; cin >> b >> c >> a1 >> a2;

  cout << fixed << setprecision(9) << ((double)(b)+sqrt(b*b+4*c))/2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}