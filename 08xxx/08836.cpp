#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  int ans = 1-n;
  while (ans < 0) ans += k-1;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}