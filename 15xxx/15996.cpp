#include <iostream>
using namespace std;

void solve(void) {
  int n, a; cin >> n >> a;

  int ans = 0;
  while (n /= a) ans += n;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}