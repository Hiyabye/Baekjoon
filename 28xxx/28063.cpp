#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int x, y; cin >> x >> y;

  if (n == 1) cout << 0;
  else cout << 4 - (x == 1 || x == n) - (y == 1 || y == n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}