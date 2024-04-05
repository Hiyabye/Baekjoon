#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0, cur = 1000;
  while (n--) {
    int p; cin >> p;
    cur = min(cur, p);
    ans += max(0, p-cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}