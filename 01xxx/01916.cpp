#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<vector<pair<int, int>>> adj(n+1);
  while (m--) {
    int a, b, c; cin >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  int s, e; cin >> s >> e;

  vector<int> dist(n+1, 1e9);
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  dist[s] = 0; pq.push({0, s});

  while (!pq.empty()) {
    int cost = pq.top().first;
    int here = pq.top().second;
    pq.pop();

    if (dist[here] < cost) continue;
    for (auto &p : adj[here]) {
      if (dist[p.first] > cost + p.second) {
        dist[p.first] = cost + p.second;
        pq.push({cost + p.second, p.first});
      }
    }
  }
  cout << dist[e];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}