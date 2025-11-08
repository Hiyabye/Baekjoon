#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;
  if (a > 2 || d < 50) return false;

  int tot = (a == 1 ? 100 : 90);
  return (b * 3 < tot && c * 3 < tot) || b <= 21 || c <= 21;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}