#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int x, y, m; cin >> x >> y >> m;

  int ans = 0;
  for (int i=m; i>=0; i-=x) {
    ans = max(ans, m - i % y);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}