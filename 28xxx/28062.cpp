#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  int x, ans = 0, small = 1e9;
  for (int i=0; i<n; i++) {
    cin >> x;
    if (x % 2) small = min(small, x);
    ans += x;
  }
  cout << ans - (ans % 2 ? small : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}