#include <algorithm>
#include <iostream>
using namespace std;

inline int calc(int a, int b) {
  int ret = 0;
  while (a != b) {
    if (a > 2 * b) a = (a + 1) / 2;
    else a = b;
    ret++;
  }
  return ret;
}

void solve(void) {
  int W, H; cin >> W >> H;
  int w, h; cin >> w >> h;
  if (W > H) swap(W, H);
  if (w > h) swap(w, h);

  cout << (W < w || H < h ? -1 : min(calc(W, w) + calc(H, h), calc(W, h) + calc(H, w)));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}