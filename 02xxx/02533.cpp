#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<vector<int>>& dp, vector<bool>& visited) {
  visited[node] = true;
  dp[node][0] = 1;
  for (int child : adj[node]) {
    if (visited[child]) continue;
    dfs(child, adj, dp, visited);
    dp[node][0] += min(dp[child][0], dp[child][1]);
    dp[node][1] += dp[child][0];
  }
}

void solve(void) {
  int n; cin >> n;
  vector<int> adj[n+1];
  for (int i=0; i<n-1; i++) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<vector<int>> dp(n+1, vector<int>(2, 0));
  vector<bool> visited(n+1, false);
  dfs(1, adj, dp, visited);

  cout << min(dp[1][0], dp[1][1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}