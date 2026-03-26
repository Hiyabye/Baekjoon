#include <iostream>
#include <queue>
#include <set>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  unordered_map<int, unordered_set<int>> s;
  for (int i=0; i<n; i++) {
    s[y[i]].insert(x[i]);
  }

  queue<tuple<int, int, int>> q; q.push({0, 0, 0});
  set<pair<int, int>> visited; visited.insert({0, 0});

  int ans = 1e9;
  while (!q.empty()) {
    auto [x, y, time] = q.front(); q.pop();
    if (y == t) {
      ans = min(ans, time);
      continue;
    }
    for (int dy=-2; dy<=2; dy++) for (int dx=-2; dx<=2; dx++) {
      if (dx == 0 && dy == 0) continue;
      int nx = x + dx, ny = y + dy;
      if (s[ny].count(nx) && !visited.count({nx, ny})) {
        visited.insert({nx, ny});
        q.push({nx, ny, time + 1});
      }
    }
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}