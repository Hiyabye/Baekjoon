#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c, q; cin >> r >> c >> q;
  vector<vector<int>> k(r+1, vector<int>(c+1, 0));
  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) cin >> k[i][j];

  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) {
    k[i][j] += k[i-1][j] + k[i][j-1] - k[i-1][j-1];
  }

  while (q--) {
    int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;
    int a = k[r2][c2] - k[r1-1][c2] - k[r2][c1-1] + k[r1-1][c1-1];
    int b = (r2 - r1 + 1) * (c2 - c1 + 1);
    cout << a / b << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}