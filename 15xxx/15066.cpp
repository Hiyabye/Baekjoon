#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> a(n), d(n);
  for (int i=0; i<n; i++) cin >> a[i] >> d[i];

  double ans = 0;
  for (int i=0; i<n; i++) {
    ans += d[i] * sin(a[i] * M_PI / 180);
  }
  cout << fixed << setprecision(2) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}