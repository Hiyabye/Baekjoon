#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> c(n);
  for (int i=0; i<n; i++) cin >> c[i];

  double sum = 0.0;
  for (int i=0; i<n; i++) sum += c[i] * c[i] * c[i];

  double ans = pow(sum, 1.0 / 3);
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}