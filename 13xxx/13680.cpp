#include <iostream>
using namespace std;

bool solve(void) {
  int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) return false;

  int dx = x2 - x1, dy = y2 - y1;
  if (dx == 0 && dy == 0) cout << 0;
  else if (dx == 0 || dy == 0 || dx == dy || dx + dy == 0) cout << 1;
  else cout << 2;
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}