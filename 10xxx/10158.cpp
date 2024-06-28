#include <iostream>
using namespace std;

void solve(void) {
  int w, h; cin >> w >> h;
  int p, q; cin >> p >> q;
  int t; cin >> t;

  int dx = t % (2*w);
  int dy = t % (2*h);

  if (dx <= w-p) p += dx;
  else if (w-p < dx && dx <= 2*w-p) p = 2*w - dx - p;
  else p = dx - 2*w + p;

  if (dy <= h-q) q += dy;
  else if (h-q < dy && dy <= 2*h-q) q = 2*h - dy - q;
  else q = dy - 2*h + q;

  cout << p << " " << q;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}