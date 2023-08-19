#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  int ans = (n/18)*2;
  n %= 18;

  if (n == 0) cout << ans;
  else if (n < 10) cout << ans + 1;
  else if (n % 2 == 0) cout << ans + 2;
  else cout << ans + 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}