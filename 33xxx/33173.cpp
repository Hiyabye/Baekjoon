#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int h, w, q; cin >> h >> w >> q;
  vector<vector<int>> ans(h+1, vector<int>(w+1, 0));
  vector<vector<bool>> tape(h+1, vector<bool>(w+1, false));
  
  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int x, y, c; cin >> x >> y >> c;
      if (!tape[x][y]) ans[x][y] = c;
      if (!tape[x+1][y]) ans[x+1][y] = c;
      if (!tape[x][y+1]) ans[x][y+1] = c;
      if (!tape[x+1][y+1]) ans[x+1][y+1] = c;
    } else if (op == 2) {
      int x, y; cin >> x >> y;
      tape[x][y] = tape[x+1][y] = tape[x][y+1] = tape[x+1][y+1] = true;
    }
  }

  for (int i=1; i<=h; i++) {
    for (int j=1; j<=w; j++) {
      cout << ans[i][j] << " ";
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