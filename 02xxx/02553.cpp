#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  long long ans = 1;
  for (int i=2; i<=n; i++) {
    ans *= i;
    ans %= 1000000000000;
    while (ans % 10 == 0) ans /= 10;
  }
  cout << ans % 10 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}