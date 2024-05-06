#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9));
  while (m--) {
    int a, b, c; cin >> a >> b >> c;
    dist[a][b] = min(dist[a][b], c);
  }

  for (int i=1; i<=n; i++) dist[i][i] = 0;
  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      cout << (dist[i][j] == 1e9 ? 0 : dist[i][j]) << " ";
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