#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    int s, c, a, r; cin >> s >> c >> a >> r;
    if (s >= 1000 || c >= 1600 || a >= 1500 || (1 <= r && r <= 30)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}