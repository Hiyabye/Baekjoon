#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n);
  while (m--) {
    int a, b; cin >> a >> b; a--; b--;
    adj[a].push_back(b); adj[b].push_back(a);
  }

  queue<pair<int, int>> q;
  vector<int> dist(n, 1e9);
  q.push({0, 0}); dist[0] = 0;

  while (!q.empty()) {
    auto [u, d] = q.front(); q.pop();
    if (dist[u] < d) continue;
    for (int v : adj[u]) {
      if (dist[v] > d+1) {
        dist[v] = d+1;
        q.push({v, d+1});
      }
    }
  }

  int mx = *max_element(dist.begin(), dist.end());
  int cnt = count(dist.begin(), dist.end(), mx);
  for (int i=0; i<n; i++) {
    if (dist[i] == mx) {
      cout << i+1 << " " << mx << " " << cnt;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}