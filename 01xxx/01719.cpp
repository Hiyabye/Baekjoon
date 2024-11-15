#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<pair<int, int>>> v(n+1, vector<pair<int, int>>(n+1, {1e9, 0}));
  while (m--) {
    int a, b, c; cin >> a >> b >> c;
    v[a][b] = {c, b};
    v[b][a] = {c, a};
  }

  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) for (int k=1; k<=n; k++) {
    if (v[j][k].first > v[j][i].first + v[i][k].first) {
      v[j][k] = {v[j][i].first + v[i][k].first, v[j][i].second};
    }
  }

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      if (i == j) cout << "- ";
      else cout << v[i][j].second << " ";
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