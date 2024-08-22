#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(const vector<double> &x, const vector<double> &y, const vector<int> &v) {
  double ret = 0;
  for (int i=1; i<v.size(); i++) {
    ret += hypot(x[v[i]] - x[v[i-1]], y[v[i]] - y[v[i-1]]);
  }
  return ret + 0.5;
}

void solve(void) {
  int n; cin >> n;
  vector<double> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int m; cin >> m;
  while (m--) {
    int p; cin >> p;
    vector<int> v(p);
    for (int i=0; i<p; i++) cin >> v[i];
    cout << calc(x, y, v) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}