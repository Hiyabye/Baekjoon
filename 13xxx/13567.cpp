#include <iostream>
#include <string>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void solve(void) {
  int m, n; cin >> m >> n;

  int x = 0, y = 0, d = 0, flag = 0;
  while (n--) {
    string op; int dir; cin >> op >> dir;
    if (op == "TURN") {
      d = (d + (dir == 0 ? 1 : 3)) % 4;
    } else {
      x += dx[d] * dir; y += dy[d] * dir;
      if (x < 0 || x >= m || y < 0 || y >= m) flag = 1;
    }
  }

  if (flag) cout << -1;
  else cout << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}