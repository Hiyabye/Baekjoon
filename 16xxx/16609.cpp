#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> c(n);
  for (int i=0; i<n; i++) cin >> c[i];
  sort(c.begin(), c.end());

  double ans = 1e9;
  for (int i=0; i<n; i++) {
    if (c[i] > i+1) {
      cout << "impossible";
      return;
    }
    ans = min(ans, c[i] / (i+1));
  }
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}