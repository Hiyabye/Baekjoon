#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;
  vector<vector<int>> adj(n);
  while (k--) {
    int u, v; cin >> u >> v;
    if (u == v) continue;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  queue<int> q;
  vector<bool> check(n, false);
  q.push(0); check[0] = true;

  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v : adj[u]) {
      if (check[v]) continue;
      check[v] = true;
      q.push(v);
    }
  }

  for (int i=0; i<n; i++) {
    if (!check[i]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "Connected." : "Not connected.") << "\n";
  return 0;
}