#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long l, r, s; cin >> l >> r >> s;
  l -= s; r -= s; s = 0;

  cout << 2 * min(r, -l) + (r > -l) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}