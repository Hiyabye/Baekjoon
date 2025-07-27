#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  map<int, int> mp;
  while (n--) {
    int x, y; cin >> x >> y;
    mp[x] = y;
  }
  while (m--) {
    int u, v; cin >> u >> v;
    mp[u] = v;
  }

  queue<pair<int, int>> q; q.push({1, 0});
  vector<bool> visited(101, false); visited[1] = true;
  while (!q.empty()) {
    auto [pos, cnt] = q.front(); q.pop();
    if (pos == 100) {
      cout << cnt;
      return;
    }
    for (int i=1; i<=6; i++) {
      int nxt = pos + i;
      if (nxt > 100) continue;
      if (mp.find(nxt) != mp.end()) nxt = mp[nxt];
      if (!visited[nxt]) {
        visited[nxt] = true;
        q.push({nxt, cnt+1});
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}