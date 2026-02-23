#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int h; cin >> h;
  int r; cin >> r;

  int d = h * sqrt(3.0) / 2.0 + 1e-9;
  cout << (r > d ? (r - 1) / d : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}