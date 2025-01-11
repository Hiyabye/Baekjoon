#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int h, w, n; cin >> h >> w >> n;
  vector<vector<char>> v(h, vector<char>(w, '.'));

  for (int i=0; i<n; i++) {
    int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2; r1--; c1--; r2--; c2--;
    for (int j=r1; j<=r2; j++) {
      v[j][c1] = (char)('a' + i);
      v[j][c2] = (char)('a' + i);
    }
    for (int j=c1; j<=c2; j++) {
      v[r1][j] = (char)('a' + i);
      v[r2][j] = (char)('a' + i);
    }
  }

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
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