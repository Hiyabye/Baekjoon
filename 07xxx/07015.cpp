#include <iostream>
using namespace std;

int calc(int y, int m, int d) {
  int a = (y - 1) * 195 + (y - 1) / 3 * 5;
  int b = (m - 1) * 20 - (y % 3 ? (m - 1) / 2 : 0);
  return a + b + d;
}

void solve(void) {
  int y, m, d; cin >> y >> m >> d;

  cout << calc(1000, 1, 1) - calc(y, m, d) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}