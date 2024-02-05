#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n+1, vector<int>(n+1, 1e9));
  while (m--) {
    int a, b; cin >> a >> b;
    adj[a][b] = adj[b][a] = 1;
  }

  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) for (int k=1; k<=n; k++) {
    adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]);
  }

  vector<int> ans(n+1, 0); ans[0] = 1e9;
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    if (i == j) continue;
    ans[i] += adj[i][j];
  }
  cout << min_element(ans.begin(), ans.end()) - ans.begin();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}