#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0, cur = 0;
  while (n--) {
    int d, v; cin >> d >> v;
    cur += v;
    ans = max(ans, cur);
    cur -= d;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}