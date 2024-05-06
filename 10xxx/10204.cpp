#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, e; cin >> n >> e;
  vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9));
  while (e--) {
    string a, b; cin >> a >> b;
    int u = stoi(a.substr(1)), v = stoi(b.substr(1));
    dist[u][v] = dist[v][u] = 1;
  }
  string c; cin >> c;

  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (i == stoi(c.substr(1))) continue;
    if (dist[stoi(c.substr(1))][i] <= 2) ans++;
  }
  cout << "The number of supervillains in 2-hop neighborhood of " << c << " is " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}