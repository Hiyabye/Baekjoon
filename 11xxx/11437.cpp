#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> adj[n+1], depth(n+1, 0), parent(n+1, 0);
  for (int i=0; i<n-1; i++) {
    int a, b; cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  vector<bool> visited(n+1, false);
  queue<int> q;
  visited[1] = true;
  q.push(1);
  
  while (!q.empty()) {
    int cur = q.front(); q.pop();
    for (int nxt : adj[cur]) {
      if (visited[nxt]) continue;
      visited[nxt] = true;
      depth[nxt] = depth[cur] + 1;
      parent[nxt] = cur;
      q.push(nxt);
    }
  }

  int m; cin >> m;
  for (int i=0; i<m; i++) {
    int a, b; cin >> a >> b;
    if (depth[a] < depth[b]) swap(a, b);
    while (depth[a] != depth[b]) a = parent[a];
    while (a != b) {
      a = parent[a];
      b = parent[b];
    }
    cout << a << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}