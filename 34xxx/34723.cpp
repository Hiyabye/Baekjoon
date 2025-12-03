#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int p, m, c; cin >> p >> m >> c;
  int x; cin >> x;

  int ans = 1e9;
  for (int i=1; i<=p; i++) for (int j=1; j<=m; j++) for (int k=1; k<=c; k++) {
    ans = min(ans, abs((i+j)*(j+k)-x));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}