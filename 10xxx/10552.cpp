#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int solve(void) {
  int n, m, p; cin >> n >> m >> p;
  vector<int> adj(m+1, -1);
  while (n--) {
    int a, b; cin >> a >> b;
    if (~adj[b]) continue;
    adj[b] = a;
  }

  queue<int> q; q.push(p);
  vector<bool> visited(m+1, false); visited[p] = true;

  int ans = 0;
  while (!q.empty()) {
    int u = q.front(); q.pop();
    if (adj[u] == -1) return ans;
    if (visited[adj[u]]) return -1;
    visited[adj[u]] = true;
    q.push(adj[u]);
    ans++;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
