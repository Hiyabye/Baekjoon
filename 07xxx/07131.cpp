#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int n, t;
double p0;
vector<int> s, i;
vector<double> m, p;

inline double calc(double value) {
  return floor(value * 100.0 + 0.5) / 100.0;
}

inline vector<double> day(int d) {
  vector<double> ret = p;
  for (int j=0; j<n; j++) {
    if (d == 0 && j == 0) continue;
    if (d < s[j] || (d - s[j]) % i[j]) continue;
    double sum = 0.0; int cnt = 0;
    for (const double &pj : p) {
      if (pj >= 0.0) sum += pj, cnt++;
    }
    if (cnt) ret[j] = calc(sum / cnt * (1.0 + m[j]));
  }
  return ret;
}

void solve(void) {
  cin >> n >> p0 >> t;
  s.resize(n); i.resize(n); m.resize(n);
  for (int j=0; j<n; j++) cin >> s[j] >> i[j] >> m[j];

  p.resize(n, -1.0); p[0] = p0;
  for (int d=0; d<t; d++) p = day(d);
  for (int j=0; j<n; j++) {
    cout << fixed << setprecision(2) << p[j] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}