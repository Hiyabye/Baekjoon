#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

inline int calc(int x) {
  return x ? (x + 3) / 4 : 25;
}

bool solve(void) {
  double v; int n, m; cin >> v >> n >> m;
  if (v == 0 && n == 0 && m == 0) return false;

  double ans = 0.0;
  if (n % 10000 == m % 10000) ans = v * 3000;
  else if (n % 1000 == m % 1000) ans = v * 500;
  else if (n % 100 == m % 100) ans = v * 50;
  else if (calc(n % 100) == calc(m % 100)) ans = v * 16;

  cout << fixed << setprecision(2) << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}