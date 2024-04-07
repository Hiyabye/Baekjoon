#include <iostream>
using namespace std;

int power(int base, int exp) {
  int ret = 1;
  while (exp) {
    if (exp & 1) ret *= base;
    base *= base;
    exp >>= 1;
  }
  return ret;
}

bool solve(void) {
  int c, w, l, p; cin >> c >> w >> l >> p;
  if (c == 0 && w == 0 && l == 0 && p == 0) return false;

  cout << power(c, w * l * p) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}