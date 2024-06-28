#include <iostream>
#include <vector>
using namespace std;

int n, m, a, b;
vector<vector<int> > adj;
vector<bool> visited;

void dfs(int cur) {
  visited[cur] = true;
  for (int i=0; i<adj[cur].size(); i++) {
    if (visited[adj[cur][i]]) continue;
    dfs(adj[cur][i]);
  }
}

void solve(void) {
  cin >> n >> m;
  adj.resize(n+1, vector<int>());
  visited.resize(n+1, false);
  for (int i=0; i<m; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (visited[i]) continue;
    dfs(i);
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}