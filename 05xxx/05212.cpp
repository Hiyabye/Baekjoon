#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

inline int calc(const vector<vector<char>> &v, int y, int x) {
  int ret = 0;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (v[ny][nx] == '.') ret++;
  }
  return ret;
}

inline bool check1(const vector<vector<char>> &v, int y, int c) {
  for (int i=1; i<=c; i++) {
    if (v[y][i] == 'X') return false;
  }
  return true;
}

inline bool check2(const vector<vector<char>> &v, int r, int x) {
  for (int i=1; i<=r; i++) {
    if (v[i][x] == 'X') return false;
  }
  return true;
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r+2, vector<char>(c+2, '.'));
  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) cin >> v[i][j];

  vector<vector<char>> ans(r+2, vector<char>(c+2, '.'));
  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) {
    if (v[i][j] == '.') continue;
    if (calc(v, i, j) < 3) ans[i][j] = 'X';
  }

  int ty = 1, by = r, lx = 1, rx = c;
  while (check1(ans, ty, c)) ty++;
  while (check1(ans, by, c)) by--;
  while (check2(ans, r, lx)) lx++;
  while (check2(ans, r, rx)) rx--;

  for (int i=ty; i<=by; i++) {
    for (int j=lx; j<=rx; j++) {
      cout << ans[i][j];
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