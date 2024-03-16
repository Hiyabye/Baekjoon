#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (!(n % i)) ans++;
  }
  cout << n << " " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int c; cin >> c;
  while (c--) solve();
  return 0;
}