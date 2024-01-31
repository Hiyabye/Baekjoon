#include <algorithm>
#include <iostream>
using namespace std;

int solve(void) {
  int n; cin >> n;
  int m; cin >> m;

  int ans = m, cur = m;
  for (int i=0; i<n; i++) {
    int a, b; cin >> a >> b;
    cur += a - b;
    if (cur < 0) return 0;
    ans = max(ans, cur);
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}