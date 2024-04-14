#include <cmath>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

bool solve(void) {
  int x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0 && x3 == 0 && y3 == 0) return false;

  int a = abs(x1*y2 + x2*y3 + x3*y1 - x1*y3 - x2*y1 - x3*y2) / 2;
  int b = gcd(abs(x1-x2), abs(y1-y2)) + gcd(abs(x2-x3), abs(y2-y3)) + gcd(abs(x3-x1), abs(y3-y1));

  cout << a-b/2+1 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}