#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, x, y; cin >> a >> b >> x >> y;

  cout << min(a + x + max(b, y), max(a, x) + b + y) * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}