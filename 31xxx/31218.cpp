#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, q; cin >> n >> m >> q;
  vector<vector<bool>> v(n, vector<bool>(m, false));

  int cnt = n * m;
  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int dy, dx, y, x; cin >> dy >> dx >> y >> x; y--; x--;
      while (0 <= y && y < n && 0 <= x && x < m && !v[y][x]) {
        v[y][x] = true; cnt--;
        y += dy; x += dx;
      }
    } else if (op == 2) {
      int y, x; cin >> y >> x; y--; x--;
      cout << v[y][x] << "\n";
    } else if (op == 3) {
      cout << cnt << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}