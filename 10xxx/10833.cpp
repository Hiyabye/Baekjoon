#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n, x, y, ans = 0;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> x >> y;
    ans += y % x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}