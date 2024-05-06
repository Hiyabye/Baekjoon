#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<bool>> adj(n+1, vector<bool>(n+1, false));
  while (m--) {
    int a, b; cin >> a >> b;
    adj[a][b] = true;
  }

  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    int big = 0, small = 0;
    for (int j=1; j<=n; j++) {
      if (i == j) continue;
      if (adj[i][j]) big++;
      if (adj[j][i]) small++;
    }
    if (big >= (n+1)/2 || small >= (n+1)/2) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}