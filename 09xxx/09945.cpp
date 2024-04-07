#include <iomanip>
#include <iostream>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n < 0) return false;

  double a = 0, b = 0, c = 0;
  for (int i=0; i<n; i++) {
    double x, y, m; cin >> x >> y >> m;
    a += x * m;
    b += y * m;
    c += m;
  }

  cout << "Case " << idx << ": ";
  cout << fixed << setprecision(2) << a / c << " ";
  cout << fixed << setprecision(2) << b / c << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}