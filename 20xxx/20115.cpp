#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> x(n);
  for (int i=0; i<n; i++) cin >> x[i];
  sort(x.begin(), x.end(), greater<double>());

  double ans = x[0];
  for (int i=1; i<n; i++) {
    ans += x[i] / 2;
  }
  cout << fixed << setprecision(6) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}