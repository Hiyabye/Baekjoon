#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  int u, v; cin >> u >> v;
  vector<vector<char>> g(u, vector<char>(v));
  for (int i=0; i<u; i++) for (int j=0; j<v; j++) cin >> g[i][j];
  string s; cin >> s;

  vector<vector<char>> res(max(n, u), vector<char>(max(m, v), '.'));
  if (s == "clamp-to-edge") {
    for (int i=0; i<u; i++) for (int j=0; j<v; j++) res[i][j] = g[i][j];
    for (int i=0; i<n; i++) for (int j=v; j<m; j++) res[i][j] = res[i][v-1];
    for (int i=u; i<n; i++) for (int j=0; j<m; j++) res[i][j] = res[u-1][j];
    for (int i=u; i<n; i++) for (int j=v; j<m; j++) res[i][j] = res[u-1][v-1];
  } else if (s == "repeat") {
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) res[i][j] = g[i%u][j%v];
  } else if (s == "mirrored-repeat") {
    for (int i=0; i<n; i++) {
      int ti = i / u, ri = i % u;
      if (ti & 1) ri = u - 1 - ri;
      for (int j=0; j<m; j++) {
        int tj = j / v, rj = j % v;
        if (tj & 1) rj = v - 1 - rj;
        res[i][j] = g[ri][rj];
      }
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) cout << res[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}