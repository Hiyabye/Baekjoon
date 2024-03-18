#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int m; cin >> m;

  int a = m * m * (90 - m);
  int b = 108000;
  int g = gcd(a, b);
  cout << a / g << "/" << b / g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}