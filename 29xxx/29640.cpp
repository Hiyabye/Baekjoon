#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(const vector<double> &v, double x) {
  int ret = 0;
  for (int i=0; i<v.size(); i++) {
    if (v[i] < x) ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  while (n--) {
    int m, k; cin >> m >> k;
    vector<double> p, q;
    while (m--) {
      int x, y; cin >> x >> y;
      p.push_back(hypot(x, y));
    }
    while (k--) {
      int x, y; cin >> x >> y;
      q.push_back(hypot(x, y));
    }
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
    if (p[0] < q[0]) a += calc(p, q[0]);
    if (p[0] > q[0]) b += calc(q, p[0]);
  }
  cout << a << ":" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}