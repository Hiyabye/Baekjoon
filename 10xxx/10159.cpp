#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<vector<bool>> adj(n+1, vector<bool>(n+1, false));
  while (m--) {
    int a, b; cin >> a >> b;
    adj[a][b] = true;
  }

  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
  }

  for (int i=1; i<=n; i++) {
    int cnt = n-1;
    for (int j=1; j<=n; j++) {
      if (i == j) continue;
      if (adj[i][j] || adj[j][i]) cnt--;
    }
    cout << cnt << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}