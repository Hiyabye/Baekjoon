#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  int ans = 0, cur = 0;
  while (n--) {
    int a, b; cin >> a >> b;
    cur += a - b;
    ans = max(ans, cur - k);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}