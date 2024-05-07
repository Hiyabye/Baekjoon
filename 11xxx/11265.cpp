#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9));
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) cin >> dist[i][j];

  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  while (m--) {
    int a, b, c; cin >> a >> b >> c;
    cout << (dist[a][b] <= c ? "Enjoy other party" : "Stay here") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}