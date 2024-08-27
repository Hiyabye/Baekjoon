#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k, x; cin >> n >> m >> k >> x;
  vector<vector<int>> adj(n+1);
  while (m--) {
    int a, b; cin >> a >> b;
    adj[a].push_back(b);
  }

  vector<int> dist(n+1, 1e9); dist[x] = 0;
  queue<int> q; q.push(x);
  while (!q.empty()) {
    int cur = q.front(); q.pop();
    for (int nxt : adj[cur]) {
      if (dist[nxt] <= dist[cur] + 1) continue;
      dist[nxt] = dist[cur] + 1;
      q.push(nxt);
    }
  }

  bool flag = false;
  for (int i=1; i<=n; i++) {
    if (dist[i] != k) continue;
    cout << i << "\n";
    flag = true;
  }
  if (!flag) cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}