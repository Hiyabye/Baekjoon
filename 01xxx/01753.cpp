#include <iostream>
#include <vector>
#include <climits>
#include <utility>
#include <queue>
using namespace std;

void solve(void) {
  int v, e, k;
  cin >> v >> e;
  cin >> k;

  vector<pair<int, int> > adj[v+1];
  vector<int> dist(v+1, INT_MAX);
  int a, b, c;
  for (int i=0; i<e; i++) {
    cin >> a >> b >> c;
    adj[a].push_back(make_pair(b, c));
  }

  dist[k] = 0;
  priority_queue<pair<int, int> > pq;
  pq.push(make_pair(0, k));
  while (!pq.empty()) {
    int cost = -pq.top().first, cur = pq.top().second;
    pq.pop();

    if (dist[cur] < cost) continue;
    for (int i=0; i<adj[cur].size(); i++) {
      int next = adj[cur][i].first, next_cost = cost + adj[cur][i].second;
      if (dist[next] <= next_cost) continue;
      dist[next] = next_cost;
      pq.push(make_pair(-next_cost, next));
    }
  }

  for (int i=1; i<=v; i++) {
    if (dist[i] == INT_MAX) cout << "INF\n";
    else cout << dist[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}