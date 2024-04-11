#include <iostream>
using namespace std;

void solve(void) {
  int m, h; cin >> m >> h;
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    int c, b; cin >> c >> b;
    ans += max(m * c, h * b);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}