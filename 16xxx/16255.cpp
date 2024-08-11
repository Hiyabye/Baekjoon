#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int k, x, y; cin >> k >> x >> y;
  if (x > y) swap(x, y);

  cout << max(2-y+x, k-y) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}