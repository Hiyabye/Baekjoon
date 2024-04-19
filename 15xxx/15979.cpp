#include <cmath>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int solve(void) {
  int m, n; cin >> m >> n;

  if (m == 0 && n == 0) return 0;
  if (gcd(abs(m), abs(n)) == 1) return 1;
  return 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}