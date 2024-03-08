#include <iostream>
using namespace std;

int solve(void) {
  int n, m; cin >> n >> m;

  if (n < 12) return -1;
  if (m < 4) return -1;
  return 11 * m + 4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}