#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

inline bool valid(int x, int y, int r, int c) {
  return x >= 0 && x < r && y >= 0 && y < c;
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  int mx = 0, x = 0, y = 0;
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (v[i][j] == '#' || v[i][j] == '@') continue;
    int cnt = (v[i][j] == '@');
    for (int k=0; k<4; k++) {
      int nx = i + dx[k], ny = j + dy[k];
      while (valid(nx, ny, r, c) && v[nx][ny] != '#') {
        cnt += (v[nx][ny] == '@');
        nx += dx[k], ny += dy[k];
      }
    }
    if (cnt > mx) mx = cnt, x = i, y = j;
  }
  cout << x << ", " << y << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}