#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, l; cin >> n >> l;
  vector<double> d(n), w(n);
  for (int i=0; i<n; i++) cin >> d[i];
  for (int i=0; i<n; i++) cin >> w[i];
  double v; cin >> v;

  double t = d[0] + w[0];
  for (int i=1; i<n; i++) {
    t = max(d[i], t + (d[i]-d[i-1])/v) + w[i];
  }
  return t + (l-d[n-1])/v <= l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}