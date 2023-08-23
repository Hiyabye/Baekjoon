#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int a, b, c, ans = 91;
  cin >> a; ans += a;
  cin >> b; ans += b * 3;
  cin >> c; ans += c;

  cout << "The 1-3-sum is " << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}