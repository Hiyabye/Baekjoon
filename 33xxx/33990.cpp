#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = -1;
  while (n--) {
    int a, b, c; cin >> a >> b >> c;
    if (a + b + c < 512) continue;
    if (ans == -1) ans = a + b + c;
    else ans = min(ans, a + b + c);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}