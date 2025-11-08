#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, q; cin >> n >> m >> q;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  while (q--) {
    int op; cin >> op;
    if (op == 0) {
      int i, j, k; cin >> i >> j >> k;
      v[i][j] = k;
    } else if (op == 1) {
      int i, j; cin >> i >> j;
      swap(v[i], v[j]);
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << v[i][j] << " ";
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