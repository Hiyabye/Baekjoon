#include <cmath>
#include <iostream>
using namespace std;

char solve(void) {
  int l, r, n, m; cin >> l >> r >> n >> m;

  if (n == m) return 'G';
  if (abs(n - m) <= l && abs(n - m) <= r) return 'E';
  if (abs(n - m) <= l) return 'L';
  if (abs(n - m) <= r) return 'R';
  return 'E';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}