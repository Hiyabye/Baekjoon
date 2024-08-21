#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];
  int m; cin >> m;

  vector<bool> v(n, false);
  while (m--) {
    int a, b; cin >> a >> b;
    for (int i=0; i<n; i++) {
      if (v[i]) continue;
      if (abs(x[i]-a) <= 50 && abs(y[i]-b) <= 50) v[i] = true;
    }
  }
  cout << count(v.begin(), v.end(), true) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}