#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<vector<int>> &adj, vector<bool> &visited, int cur) {
  if (visited[cur]) return 0;
  visited[cur] = true;

  int ret = 1;
  for (int nxt : adj[cur]) {
    ret += dfs(adj, visited, nxt);
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n);
  while (m--) {
    int a, b; cin >> a >> b;
    adj[--b].push_back(--a);
  }

  vector<int> ans(n);
  for (int i=0; i<n; i++) {
    vector<bool> visited(n, false);
    ans[i] = dfs(adj, visited, i);
  }

  int mx = *max_element(ans.begin(), ans.end());
  for (int i=0; i<n; i++) {
    if (ans[i] == mx) cout << i+1 << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}