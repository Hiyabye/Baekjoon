#include <iostream>
using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

inline bool leap(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

inline bool cmp(int y1, int m1, int d1, int y2, int m2, int d2) {
  if (y1 > y2) return false;
  if (y1 == y2 && m1 > m2) return false;
  if (y1 == y2 && m1 == m2 && d1 > d2) return false;
  return true;
}

inline int calc(int y, int m, int d) {
  int ret = 0;
  while (y > 0) {
    ret += (y % 10 == 1);
    y /= 10;
  }
  while (m > 0) {
    ret += (m % 10 == 1);
    m /= 10;
  }
  while (d > 0) {
    ret += (d % 10 == 1);
    d /= 10;
  }
  return ret;
}

void solve(void) {
  int t; cin >> t;
  int a, b, c; cin >> a >> b >> c;

  int ans = 0, y = 2023, m = 1, d = 1;
  while (cmp(y, m, d, a, b, c)) {
    if (calc(y, m, d) >= t) ans++;
    d++;
    if (d > days[m] + (m == 2 && leap(y))) {
      d = 1;
      m++;
      if (m > 12) {
        m = 1;
        y++;
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}