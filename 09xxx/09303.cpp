#include <algorithm>
#include <iomanip>
#include <iostream>
#include <queue>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  int x, y; cin >> x >> y;
  int m; cin >> m;

  vector<unordered_map<int, double>> adj(n+1);
  while (m--) {
    int a, b; double p; cin >> a >> b >> p;
    adj[a][b] = max(adj[a][b], p);
  }

  vector<double> dist(n+1, 0);
  vector<bool> visited(n+1, false);
  priority_queue<pair<double, int>> pq;
  dist[x] = 1; pq.push({1, x});

  while (!pq.empty()) {
    int cur = pq.top().second; pq.pop();
    if (cur == y) break;
    if (visited[cur]) continue;
    visited[cur] = true;
    for (auto nxt : adj[cur]) {
      dist[nxt.first] = max(dist[nxt.first], dist[cur] * nxt.second);
      pq.push({dist[nxt.first], nxt.first});
    }
  }
  cout << "Case " << idx << ": " << fixed << setprecision(4) << dist[y] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}