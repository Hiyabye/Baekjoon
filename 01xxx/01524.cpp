#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int s = 0, b = 0, x;
  while (n--) cin >> x, s = max(s, x);
  while (m--) cin >> x, b = max(b, x);

  cout << (s >= b ? 'S' : 'B') << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}