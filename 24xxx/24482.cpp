#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<int> ans;

void dfs(int r, int d) {
  ans[r] = d;
  for (int v : adj[r]) {
    if (~ans[v]) continue;
    dfs(v, d+1);
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
    sort(adj[i].begin(), adj[i].end(), greater<int>());
  }

  ans.assign(n, -1);
  dfs(r, 0);

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