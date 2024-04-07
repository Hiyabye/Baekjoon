#include <iostream>
using namespace std;

void solve(void) {
  int cu, du; cin >> cu >> du;
  int cd, dd; cin >> cd >> dd;
  int cp, dp; cin >> cp >> dp;
  int h; cin >> h;

  int ans = 0;
  while (h > 0) {
    if (!(ans % cu)) h -= du;
    if (!(ans % cd)) h -= dd;
    if (!(ans % cp)) h -= dp;
    if (h > 0) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}