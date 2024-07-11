#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;
  vector<double> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  double apl = 0;
  for (int i=0; i<n; i++) {
    apl += a[i] * a[i] / n;
  }

  if (apl == 0) {
    while (n--) cout << "0 ";
    return;
  }

  for (int i=0; i<n; i++) {
    cout << fixed << setprecision(7) << a[i] * sqrt(x / apl) << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}