#include <iostream>
using namespace std;

bool solve(void) {
  int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  int x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
  int w, h; cin >> w >> h;

  if (w <= x3-x1 && h <= y2-y1) return true;
  if (w <= x2-x4 && h <= y2-y1) return true;
  if (h <= y3-y1 && w <= x2-x1) return true;
  if (h <= y2-y4 && w <= x2-x1) return true;
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}