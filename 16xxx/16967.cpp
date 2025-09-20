#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int h, w, x, y; cin >> h >> w >> x >> y;
  vector<vector<int>> b(h+x, vector<int>(w+y));
  for (int i=0; i<h+x; i++) for (int j=0; j<w+y; j++) cin >> b[i][j];

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      cout << b[i][j] << " ";
      b[i+x][j+y] -= b[i][j];
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