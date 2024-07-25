#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 1e9;
  for (int a=1; a<=n; a++) {
    if (n % a) continue;
    for (int b=1; b<=n/a; b++) {
      if ((n/a) % b) continue;
      int c = n / a / b;
      ans = min(ans, 2 * (a * b + b * c + c * a));
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int c; cin >> c;
  while (c--) solve();
  return 0;
}