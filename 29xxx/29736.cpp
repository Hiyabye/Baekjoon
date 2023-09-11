#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int k, x; cin >> k >> x;

  int ans = 0;
  for (int i=a; i<=b; i++) {
    if (abs(k-i) <= x) ans++;
  }
  
  if (ans) cout << ans;
  else cout << "IMPOSSIBLE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}