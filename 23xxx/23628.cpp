#include <algorithm>
#include <iostream>
using namespace std;

inline int calc(int y) {
  int ret = 0;
  for (int i=0; i<y; i++) {
    ret += i / 2 + 15;
  }
  return ret;
}

void solve(void) {
  int sy, sm, sd; cin >> sy >> sm >> sd;
  int ey, em, ed; cin >> ey >> em >> ed;

  int d = (ey - sy) * 360 + (em - sm) * 30 + ed - sd;
  cout << calc(d / 360) << " " << min(36, d / 30) << "\n" << d << "days\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}