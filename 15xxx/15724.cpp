#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n+1, vector<int>(m+1, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) cin >> v[i][j];

  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) {
    v[i][j] += v[i-1][j] + v[i][j-1] - v[i-1][j-1];
  }

  int k; cin >> k;
  while (k--) {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    cout << v[x2][y2] - v[x1-1][y2] - v[x2][y1-1] + v[x1-1][y1-1] << '\n';
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}