#include <iostream>
using namespace std;

int power(int base, int exp) {
  int ret = 1;
  while (exp--) ret *= base;
  return ret;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int a1, a2, a3; cin >> a1 >> a2 >> a3;
  if (a2 - a1 == a3 - a2) cout << n * (2 * a1 + (n - 1) * (a2 - a1)) / 2 << "\n";
  else                    cout << a1 * (power(a2 / a1, n) - 1) / (a2 / a1 - 1) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}