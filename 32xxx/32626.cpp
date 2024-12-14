#include <iostream>
using namespace std;

void solve(void) {
  int sx, sy; cin >> sx >> sy;
  int ex, ey; cin >> ex >> ey;
  int px, py; cin >> px >> py;

  if (sx == ex) {
    cout << ((sx == px && sy < py && py < ey) || (sx == px && ey < py && py < sy) ? 2 : 0);
  } else if (sy == ey) {
    cout << ((sy == py && sx < px && px < ex) || (sy == py && ex < px && px < sx) ? 2 : 0);
  } else {
    cout << 1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}