#include <iostream>
using namespace std;

void solve(void) {
  int x, y, a, b; cin >> x >> y >> a >> b;

  cout << ((y - x) % (a + b) ? -1 : (y - x) / (a + b)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}