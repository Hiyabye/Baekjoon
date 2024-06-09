#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int x, y; cin >> x >> y;

  cout << x + y - gcd(x, y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}