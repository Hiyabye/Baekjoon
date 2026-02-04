#include <iomanip>
#include <iostream>
using namespace std;

inline int calc(int y, int m, int d) {
  return (y*360) + ((m-1)*30) + (d-1);
}

void solve(void) {
  int y0, m0, d0; double t0, p0; cin >> y0 >> m0 >> d0 >> t0 >> p0;
  int y1, m1, d1; double t1, p1; cin >> y1 >> m1 >> d1 >> t1 >> p1;

  int t = 2 * calc(y0, m0, d0) - calc(y1, m1, d1);
  int a = t / 360, r = t % 360;
  if (r < 0) r += 360, a--;
  int b = r / 30 + 1;
  int c = r % 30 + 1;

  cout << a << " " << b << " " << c << " ";
  cout << fixed << setprecision(3) << 2*t0-t1 << " " << 2*p0-p1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}