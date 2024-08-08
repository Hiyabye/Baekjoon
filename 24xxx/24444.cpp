#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, r; cin >> n >> m >> r; r--;
  vector<vector<int>> adj(n);
  while (m--) {
    int u, v; cin >> u >> v; u--; v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int i=0; i<n; i++) {
    sort(adj[i].begin(), adj[i].end());
  }

  int idx = 1;
  vector<int> ans(n, 0);
  queue<int> q; q.push(r);

  while (!q.empty()) {
    int cur = q.front(); q.pop();
    if (ans[cur]) continue;
    ans[cur] = idx++;
    for (int v : adj[cur]) {
      if (ans[v]) continue;
      q.push(v);
    }
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}