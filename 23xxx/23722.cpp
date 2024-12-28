#include <iostream>
using namespace std;

inline int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

bool solve(void) {
  int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
  if (a1 == 0 && a2 == 0 && a3 == 0 && a4 == 0) return false;

  cout << gcd(gcd(a1, a2), gcd(a3, a4)) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}