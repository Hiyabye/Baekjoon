#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int f, s, g, u, d; cin >> f >> s >> g >> u >> d;

  vector<bool> visited(f+1, false);
  queue<pair<int, int>> q; q.push({s, 0});
  
  while (!q.empty()) {
    auto [cur, cnt] = q.front(); q.pop();
    if (cur == g) { cout << cnt; return; }

    if (visited[cur]) continue;
    visited[cur] = true;
    if (cur+u <= f) q.push({cur+u, cnt+1});
    if (cur-d >= 1) q.push({cur-d, cnt+1});
  }
  cout << "use the stairs";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}