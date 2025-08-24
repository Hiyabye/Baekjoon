#include <iostream>
using namespace std;

void solve(void) {
  int l, r; cin >> l >> r;

  cout << r - l + (l == 1 && r == 1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}