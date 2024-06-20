#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  long long l, u;
  double f;
} Shield;

long long x, y, n;
vector<Shield> s;

inline double help(double v, const Shield &a, const Shield &b) {
  return v * (a.l - b.u) + (v * a.f) * (a.u - a.l);
}

double calc(double v) {
  if (n == 0) return v * y - x;

  double ret = help(v, s[0], s[n-1]);
  for (int i=1; i<n; i++) ret += help(v, s[i], s[i-1]);
  return v * y - x + ret;
}

void solve(void) {
  cin >> x >> y >> n;
  s.resize(n);
  for (int i=0; i<n; i++) cin >> s[i].l >> s[i].u >> s[i].f;

  double l = -1e9, r = 1e9;
  while (abs(l-r) > 1e-8) {
    double m = (l+r) / 2.0;
    if (calc(m) > 0) r = m;
    else l = m;
  }
  while (calc(l) < 0) l += 1e-8;
  while (calc(l) > 0) l -= 1e-8;

  cout << fixed << setprecision(7) << l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}