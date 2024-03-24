#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

bool solve(void) {
  double d, h, v; cin >> d >> h >> v;
  if (d == 0 && h == 0 && v == 0) return false;

  cout << "Horizontal DPI: " << fixed << setprecision(2) << h / d * sqrt(337) / 16 << "\n";
  cout << "Vertical DPI: " << fixed << setprecision(2) << v / d * sqrt(337) / 9 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}