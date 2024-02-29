#include <iostream>
using namespace std;

bool solve(void) {
  int l, w, h, v; cin >> l >> w >> h >> v;
  if (l == 0 && w == 0 && h == 0 && v == 0) return false;

  if (l == 0) l = v / (w * h);
  if (w == 0) w = v / (h * l);
  if (h == 0) h = v / (l * w);
  if (v == 0) v = l * w * h;

  cout << l << " " << w << " " << h << " " << v << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}