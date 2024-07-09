#include <iostream>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  int sx, sy; cin >> sx >> sy;
  int ex, ey; cin >> ex >> ey;

  if (n == 1 || m == 1) return sx == ex && sy == ey;
  return (sx + sy) % 2 == (ex + ey) % 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}