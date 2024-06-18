#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;

  int ans = -1;
  while (n--) {
    int s, t; cin >> s >> t;
    if (s + t > x) continue;
    ans = max(ans, s);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}