#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  cout << min(x + y, 2 * min(x, y) + 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}