#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int p, q, r; cin >> p >> q >> r;

  cout << p + min(q, r) - 1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}