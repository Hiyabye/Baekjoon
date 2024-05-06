#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<vector<bool>> adj(n+1, vector<bool>(n+1, false));
  while (k--) {
    int a, b; cin >> a >> b;
    adj[a][b] = true;
  }

  for (int l=1; l<=n; l++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    adj[i][j] = adj[i][j] || (adj[i][l] && adj[l][j]);
  }

  int s; cin >> s;
  while (s--) {
    int a, b; cin >> a >> b;
    cout << (adj[a][b] ? -1 : (adj[b][a] ? 1 : 0)) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}