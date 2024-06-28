#include <iostream>
using namespace std;

int solve(void) {
  int p[5]; cin >> p[1] >> p[2] >> p[3] >> p[4];
  int x, y, r; cin >> x >> y >> r;

  for (int i=1; i<=4; i++) {
    if (p[i] == x) return i;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}