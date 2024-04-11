#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  cout << (4 * x - y) / 2 << " " << (y - 2 * x) / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}