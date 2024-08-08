#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int idx = 1;
vector<vector<int>> adj;
vector<int> ans;

void dfs(int r) {
  ans[r] = idx++;
  for (int v : adj[r]) {
    if (ans[v]) continue;
    dfs(v);
  }
}

void solve(void) {
  int n, m, r; cin >> n >> m >> r; r--;
  adj.resize(n);
  while (m--) {
    int u, v; cin >> u >> v; u--; v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int i=0; i<n; i++) {
    sort(adj[i].begin(), adj[i].end());
  }

  ans.assign(n, 0);
  dfs(r);

  for (int i=0; i<n; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}