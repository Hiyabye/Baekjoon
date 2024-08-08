#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long idx = 1;
vector<vector<int>> adj;
vector<long long> a;

void dfs(int r, long long d) {
  a[r] = d * idx++;
  for (int v : adj[r]) {
    if (~a[v]) continue;
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
    sort(adj[i].begin(), adj[i].end());
  }

  a.assign(n, -1);
  dfs(r, 0);

  long long ans = 0;
  for (int i=0; i<n; i++) {
    if (~a[i]) ans += a[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}