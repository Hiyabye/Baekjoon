#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 10;
  while (n >>= 1) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}