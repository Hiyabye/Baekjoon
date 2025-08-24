#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, e; cin >> n >> e;
  vector<vector<int>> d(n+1, vector<int>(n+1, 1e8));
  while (e--) {
    int a, b, c; cin >> a >> b >> c;
    d[a][b] = d[b][a] = c;
  }
  int v1, v2; cin >> v1 >> v2;

  for (int i=1; i<=n; i++) d[i][i] = 0;
  for (int k=1; k<=n; k++) for (int i=1; i<=n-1; i++) for (int j=i+1; j<=n; j++) {
    if (i == j || j == k || k == i) continue;
    d[i][j] = d[j][i] = min(d[i][j], d[i][k] + d[k][j]);
  }

  if (d[v1][v2] == 1e8) cout << -1;
  else if ((d[1][v1] == 1e8 || d[v2][n] == 1e8) && (d[1][v2] == 1e8 || d[v1][n] == 1e8)) cout << -1;
  else cout << min(d[1][v1] + d[v1][v2] + d[v2][n], d[1][v2] + d[v2][v1] + d[v1][n]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}