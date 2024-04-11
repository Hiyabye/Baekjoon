#include <iostream>
using namespace std;

void solve(void) {
  int y, m; cin >> y >> m;

  int ans = 0;
  for (int i=0; i<12 && i<12*y+m; i++) ans += 15;
  for (int i=12; i<24 && i<12*y+m; i++) ans += 9;
  for (int i=24; i<12*y+m; i++) ans += 4;
  cout << ans / 12 << " " << ans % 12;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}