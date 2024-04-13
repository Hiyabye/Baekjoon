#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  double ans = 100;
  for (int i=1; i<n; i++) {
    ans = max(ans, ans * a[i-1] / a[i]);
  }
  cout << fixed << setprecision(2) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}