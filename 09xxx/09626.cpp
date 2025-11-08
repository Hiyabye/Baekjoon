#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  int u, l, r, d; cin >> u >> l >> r >> d;
  vector<vector<char>> v(m+u+d, vector<char>(n+l+r));
  for (int i=0; i<m+u+d; i++) for (int j=0; j<n+l+r; j++) {
    v[i][j] = ((i+j) & 1 ? '.' : '#');
  }

  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i+u][j+l];
  for (int i=0; i<m+u+d; i++) {
    for (int j=0; j<n+l+r; j++) {
      cout << v[i][j];
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