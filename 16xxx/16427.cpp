#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, s; cin >> n >> s;

  int ans = 0;
  while (n--) {
    int m; cin >> m;
    ans = max(ans, (m * s + 999) / 1000);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}