#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int m, xs, ys, xf, yf; cin >> m >> xs >> ys >> xf >> yf;

  int ans = abs(xs - xf) + abs(ys - yf);
  cout << (ans > m ? "Infinity" : "First 1") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}