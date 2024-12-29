#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, r; cin >> n >> r;
  vector<double> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  double sum = 0;
  for (int i=0; i<n; i++) {
    sum += a[i];
  }

  for (int i=0; i<n; i++) {
    cout << fixed << setprecision(7) << M_PI * r * r * a[i] / sum << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}