#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, a, b, c; cin >> n >> a >> b >> c;

  if (n < 2) {
    cout << "0 0";
    return;
  }

  int ans = min(a, b) + (n-2) * min({a, b, c});
  cout << ans / 100 << " " << ans % 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}