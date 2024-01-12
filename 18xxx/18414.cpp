#include <iostream>
using namespace std;

void solve(void) {
  int x, l, r; cin >> x >> l >> r;

  cout << ((l <= x && x <= r) ? x : (x < l) ? l : r);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}