#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];
  int q; cin >> q;

  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int i; cin >> i; i--;
      int x = v[i][n-1];
      for (int j=n-1; j>0; j--) v[i][j] = v[i][j-1];
      v[i][0] = x;
    } else if (op == 2) {
      vector<vector<int>> tmp = v;
      for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
        v[j][n-i-1] = tmp[i][j];
      }
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
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