#include <iostream>
using namespace std;

void solve(void) {
  int g, c, e; cin >> g >> c >> e;

  cout << (c >= e ? 0 : (e-c)*(2*g-1)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}