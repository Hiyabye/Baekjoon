#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  int ans = 1;
  while ((y - x) * ans < y) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}