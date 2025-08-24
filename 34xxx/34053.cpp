#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  long long ans = 0, mn = 1e18;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    long long a; cin >> a;
    ans += a; mn = min(mn, a);
  }
  cout << ans - mn;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}