#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0, cur = 1;
  while (cur < n) cur <<= 1, ans++;
  cout << ans + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}