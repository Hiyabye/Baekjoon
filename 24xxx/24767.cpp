#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  double d; int n; cin >> d >> n;
  if (d == 0 && n == 0) return false;
  vector<double> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  vector<bool> ans(n, true);
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (hypot(x[i] - x[j], y[i] - y[j]) <= d) {
      ans[i] = ans[j] = false;
    }
  }

  cout << count(ans.begin(), ans.end(), false) << " sour, ";
  cout << count(ans.begin(), ans.end(), true) << " sweet\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}