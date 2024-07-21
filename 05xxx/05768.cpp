#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

inline int calc(int x) {
  int ret = 0;
  for (int i=1; i<=x; i++) {
    if (x % i == 0) ret++;
  }
  return ret;
}

bool solve(void) {
  int m, n; cin >> m >> n;
  if (m == 0 && n == 0) return false;

  pair<int, int> ans = {0, 0};
  for (int i=m; i<=n; i++) {
    ans = max(ans, {calc(i), i});
  }
  cout << ans.second << " " << ans.first << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}