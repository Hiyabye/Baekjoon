#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };

void solve(void) {
  int h, w; cin >> h >> w;
  int r, c, d; cin >> r >> c >> d;
  vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));
  for (int i=0; i<h; i++) {
    string s; cin >> s;
    for (int j=0; j<w; j++) a[i][j] = s[j] - '0';
  }
  for (int i=0; i<h; i++) {
    string s; cin >> s;
    for (int j=0; j<w; j++) b[i][j] = s[j] - '0';
  }

  int x = 0, y = 0;
  vector<vector<bool>> visited(h, vector<bool>(w, true));
  while (0 <= r && r < h && 0 <= c && c < w && y < (1<<14)) {
    x++;
    y = (visited[r][c] ? 0 : y + 1);
    d = (d + 4 + (visited[r][c] ? a[r][c] : b[r][c])) % 4;
    visited[r][c] = false;
    r += dr[d]; c += dc[d];
  }
  cout << x - y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}