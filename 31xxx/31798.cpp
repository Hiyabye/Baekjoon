#include <cmath>
#include <iostream>
using namespace std;

int solve(void) {
  int a, b, c; cin >> a >> b >> c;

  if (a == 0) return c * c - b;
  if (b == 0) return c * c - a;
  if (c == 0) return sqrt(a + b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}