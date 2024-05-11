#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

typedef struct {
  int h, m, s, u;
} Time;

inline int calc(int h, int m, int s, int u) {
  return h * 360000 + m * 6000 + s * 100 + u;
}

inline int diff(const Time &t1, const Time &t2) {
  return ((t2.h - t1.h) * calc(1, 0, 0, 0)
        + (t2.m - t1.m) * calc(0, 1, 0, 0)
        + (t2.s - t1.s) * calc(0, 0, 1, 0)
        + (t2.u - t1.u) * calc(0, 0, 0, 1)) % 4320000;
}

void solve(int idx) {
  Time t1, t2;
  cin >> t1.h >> t1.m >> t1.s >> t1.u;
  cin >> t2.h >> t2.m >> t2.s >> t2.u;
  double r; cin >> r;

  double ans = acos(-1) * r * r * diff(t1, t2) / calc(12, 0, 0, 0);
  cout << idx << ". " << fixed << setprecision(3) << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int d; cin >> d;
  for (int i=1; i<=d; i++) solve(i);
  return 0;
}