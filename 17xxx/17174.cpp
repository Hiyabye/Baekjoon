#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = n;
  while (n) ans += (n /= m);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}