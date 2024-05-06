#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  int ans = 2 * a;
  if (c >= 2) ans += 2 * b + 3, c -= 2;
  ans += 3 * (c / 2);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}