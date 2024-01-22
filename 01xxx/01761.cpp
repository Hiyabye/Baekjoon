#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int lca(int a, int b, vector<int>& parent, vector<int>& depth) {
  if (depth[a] < depth[b]) swap(a, b);
  while (depth[a] != depth[b]) a = parent[a];
  while (a != b) {
    a = parent[a];
    b = parent[b];
  }
  return a;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> adj[n+1];
  for (int i=0; i<n-1; i++) {
    int a, b, c; cin >> a >> b >> c;
    adj[a].push_back({b, c});
    adj[b].push_back({a, c});
  }

  vector<bool> visited(n+1, false);
  queue<int> q;
  visited[1] = true;
  q.push(1);

  vector<int> dist(n+1, 0), parent(n+1, 0), depth(n+1, 0);
  while (!q.empty()) {
    int cur = q.front(); q.pop();
    for (auto [next, cost] : adj[cur]) {
      if (visited[next]) continue;
      visited[next] = true;
      dist[next] = dist[cur] + cost;
      parent[next] = cur;
      depth[next] = depth[cur] + 1;
      q.push(next);
    }
  }

  int m; cin >> m;
  for (int i=0; i<m; i++) {
    int a, b; cin >> a >> b;
    int c = lca(a, b, parent, depth);
    cout << dist[a] + dist[b] - 2 * dist[c] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}