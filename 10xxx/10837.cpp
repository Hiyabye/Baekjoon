#include <iostream>
using namespace std;

bool solve(int k) {
  int m, n; cin >> m >> n;

  if (m > n) return 2 * m <= n + k + 2;
  else       return 2 * n <= m + k + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, c; cin >> k >> c;
  while (c--) cout << solve(k) << "\n";
  return 0;
}