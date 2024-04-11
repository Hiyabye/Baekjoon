#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    int y; cin >> y;
    if (5 * x - 3 * y > 40) ans++;
  }
  cout << ans << (ans == n ? "+" : "");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}