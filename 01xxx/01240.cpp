#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

inline int bfs(const vector<vector<pair<int, int>>> &adj, int s, int e) {
  vector<int> dist(adj.size(), -1); dist[s] = 0;
  queue<pair<int, int>> q; q.push({s, 0});
  while (!q.empty()) {
    auto [u, d] = q.front(); q.pop();
    if (u == e) return d;
    for (auto &[v, w] : adj[u]) {
      if (dist[v] == -1) {
        dist[v] = d + w;
        q.push({v, dist[v]});
      }
    }
  }
  return -1;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<pair<int, int>>> adj(n+1);
  for (int i=1; i<n; i++) {
    int u, v, w; cin >> u >> v >> w;
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }

  while (m--) {
    int s, e; cin >> s >> e;
    cout << bfs(adj, s, e) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}