#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int x1, y1, f1, x2, y2, f2;
  cin >> x1 >> y1 >> f1 >> x2 >> y2 >> f2;

  cout << abs(x1-x2) + abs(y1-y2) + f1 + f2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}