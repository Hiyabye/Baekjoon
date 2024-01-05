#include <iostream>
using namespace std;

void solve(void) {
  int e, f, c; cin >> e >> f >> c;

  int ans = 0, empty = e + f;
  while (empty >= c) {
    ans += empty / c;
    empty = empty / c + empty % c;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}