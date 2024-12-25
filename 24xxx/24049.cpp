#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n+1, vector<int>(m+1));
  for (int i=1; i<=n; i++) cin >> v[i][0];
  for (int i=1; i<=m; i++) cin >> v[0][i];

  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) {
    v[i][j] = v[i-1][j] ^ v[i][j-1];
  }
  cout << v[n][m];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}