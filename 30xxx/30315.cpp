#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;
  vector<int> x(k), y(k);
  for (int i=0; i<k; i++) cin >> x[i] >> y[i];

  double ans = 1e9;
  for (int i=0; i<k; i++) {
    double sum = 0;
    for (int j=0; j<k; j++) {
      sum += hypot(x[i]-x[j], y[i]-y[j]);
    }
    ans = min(ans, sum / (k-1));
  }
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}