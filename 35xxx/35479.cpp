#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double r, g, b; cin >> r >> g >> b;
  r /= 255.0; g /= 255.0; b /= 255.0;

  double k = 1 - max({r, g, b});
  double c = (1.0 - r - k) / (1.0 - k);
  double m = (1.0 - g - k) / (1.0 - k);
  double y = (1.0 - b - k) / (1.0 - k);
  if (k == 1.0) c = m = y = 0.0;
  
  cout << fixed << setprecision(5) << c << " " << m << " " << y << " " << k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}