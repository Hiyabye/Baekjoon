#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int c, r; cin >> c >> r;

  int x = 0, y = 0, dx, dy; cin >> dx >> dy;
  while (dx || dy) {
    x = min(max(0, x + dx), c);
    y = min(max(0, y + dy), r);
    cout << x << " " << y << "\n";
    cin >> dx >> dy;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}