#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int x, y; cin >> x >> y;
    if (x == 136) ans += 1000;
    else if (x == 142) ans += 5000;
    else if (x == 148) ans += 10000;
    else if (x == 154) ans += 50000;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}