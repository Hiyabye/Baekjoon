#include <iostream>
using namespace std;

inline bool leap(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

inline int calc(int m, int y) {
  if (m == 2) return leap(y) ? 29 : 28;
  if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
  return 31;
}

void solve(void) {
  int x, n; cin >> x >> n;
  int d, m, g; cin >> d >> m >> g;

  int cur = (2 * x - 1) * n - 1;
  while (cur > 0) {
    if (d + cur <= calc(m, g)) {
      d += cur;
      break;
    }
    cur -= calc(m, g) - d + 1;
    d = 1;
    if (++m > 12) m = 1, g++;
  }
  cout << d << " " << m << " " << g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}