#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;

  int ans = n;
  while (k--) ans = 10 * ans + n;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}