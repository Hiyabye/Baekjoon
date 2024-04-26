#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double h, w, w1, w2; cin >> h >> w >> w1 >> w2;

  cout << fixed << setprecision(6) << h * (w1 + w2) + w * (hypot(h, w2 - w1) + w1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}