#include <iostream>
using namespace std;

void solve(void) {
  int W, H, w, h; cin >> W >> H >> w >> h;

  cout << ((W / w + 1) / 2) * ((H / h + 1) / 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}