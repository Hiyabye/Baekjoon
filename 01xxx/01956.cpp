#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int v, e; cin >> v >> e;
  vector<vector<int>> adj(v+1, vector<int>(v+1, 1e9));
  while (e--) {
    int a, b, c; cin >> a >> b >> c;
    adj[a][b] = c;
  }

  for (int k=1; k<=v; k++) for (int i=1; i<=v; i++) for (int j=1; j<=v; j++) {
    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
  }

  int ans = 1e9;
  for (int i=1; i<=v; i++) for (int j=1; j<=v; j++) {
    if (i == j) continue;
    ans = min(ans, adj[i][j] + adj[j][i]);
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}