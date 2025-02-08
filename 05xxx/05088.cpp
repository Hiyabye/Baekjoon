#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

bool solve(void) {
  int x, y; cin >> x >> y;
  if (x == 0 && y == 0) return false;

  int m; cin >> m;
  map<pair<int, int>, int> mp;
  while (m--) {
    int a, b; cin >> a >> b;
    mp[{a, b}]++;
  }

  int n; cin >> n;
  int ans = 0;
  while (n--) {
    int a, b; cin >> a >> b;
    if (mp.count({a, b})) ans += mp[{a, b}];
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}