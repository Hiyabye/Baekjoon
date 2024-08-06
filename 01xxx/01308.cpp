#include <iostream>
using namespace std;

inline bool leap(int y) {
  return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

inline int calc(int y, int m, int d) {
  int ret = 0;
  int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for (int i=0; i<y; i++) ret += 365 + leap(i);
  for (int i=0; i<m; i++) ret += a[i-1];
  if (m > 2) ret += leap(y);
  ret += d;
  return ret;
}

void solve(void) {
  int y1, m1, d1; cin >> y1 >> m1 >> d1;
  int y2, m2, d2; cin >> y2 >> m2 >> d2;

  int ans = calc(y2, m2, d2) - calc(y1, m1, d1);
  if (ans > 365242) cout << "gg";
  else cout << "D-" << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}