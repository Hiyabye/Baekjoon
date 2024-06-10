#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  double a, b; cin >> a >> b;

  cout << (int)(abs(a / b - 1) * 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}