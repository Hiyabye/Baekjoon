#include <iostream>
using namespace std;

void solve(void) {
  int a, b, h; cin >> a >> b >> h;

  int ans = 0;
  while (h > 0) {
    h -= a;
    ans++;
    if (h <= 0) break;
    h += b;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}