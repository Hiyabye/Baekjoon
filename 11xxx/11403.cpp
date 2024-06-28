#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int x, vector<int> adj[], vector<bool> &visited) {
  for (int i=0; i<adj[x].size(); i++) {
    int nxt = adj[x][i];
    if (visited[nxt]) continue;
    visited[nxt] = true;
    dfs(nxt, adj, visited);
  }
}

void solve(void) {
  int n; cin >> n;
  vector<int> adj[n];
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      int x; cin >> x;
      if (x) adj[i].push_back(j);
    }
  }

  for (int i=0; i<n; i++) {
    vector<bool> visited(n, false);
    dfs(i, adj, visited);
    for (int j=0; j<n; j++) {
      cout << visited[j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}