#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0, cur = 0, f = -2;
  for (int i=0; i<n; i++) {
    int p; cin >> p;
    if (p) cur++;
    else if (i-f >= 2) f = i;
    else cur = 0;
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}