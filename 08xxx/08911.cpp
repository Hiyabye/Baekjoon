#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void solve(void) {
  string s; cin >> s;

  int x = 0, y = 0, d = 0;
  int mnx = 0, mxx = 0, mny = 0, mxy = 0;
  for (char c : s) {
    if (c == 'F') {
      x += dx[d]; y += dy[d];
      mnx = min(mnx, x); mxx = max(mxx, x);
      mny = min(mny, y); mxy = max(mxy, y);
    } else if (c == 'B') {
      d = (d + 2) % 4;
      x += dx[d]; y += dy[d];
      mnx = min(mnx, x); mxx = max(mxx, x);
      mny = min(mny, y); mxy = max(mxy, y);
      d = (d + 2) % 4;
    } else if (c == 'L') {
      d = (d + 3) % 4;
    } else {
      d = (d + 1) % 4;
    }
  }
  cout << (mxx - mnx) * (mxy - mny) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}