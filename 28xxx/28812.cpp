#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;

  int ans = 1e9;
  while (n--) {
    int p, d, v; cin >> p >> d >> v;
    ans = min(ans, p + d + v * c);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}