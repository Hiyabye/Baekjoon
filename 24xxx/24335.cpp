#include <iostream>
using namespace std;

inline int calc(int t) {
  return t / 12.0;
}

void solve(void) {
  int h, m, dh, dm, c; cin >> h >> m >> dh >> dm >> c;

  int tot = ((h * 60 + m) + (dh * 60 + dm)) % 720;
  if (c == 1) cout << tot / 60 << " " << tot % 60;
  else if (tot % 12 == 0) cout << "@ " << calc(tot);
  else cout << calc(tot) << " " << (calc(tot)+1) % 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}