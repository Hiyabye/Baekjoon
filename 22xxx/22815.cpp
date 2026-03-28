#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

inline int calc(const pair<int, int> &p) {
  return p.first * p.first + p.second * p.second;
}

void solve(void) {
  pair<int, int> cur = {0, 0};
  pair<int, int> ans = {0, 0};

  int dx, dy; cin >> dx >> dy;
  while (dx != 0 || dy != 0) {
    cur.first += dx; cur.second += dy;
    if (calc(cur) > calc(ans)) ans = cur;
    else if (calc(cur) == calc(ans)) ans = max(ans, cur);
    cin >> dx >> dy;
  }
  cout << ans.first << " " << ans.second << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}