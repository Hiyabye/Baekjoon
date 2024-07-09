#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0, cur = 0;
  while (n--) {
    int x; cin >> x;
    cur += x;
    if (cur < 0) ans++, cur++;
  }
  cout << ans + abs(cur) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}