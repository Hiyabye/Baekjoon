#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int calc(int n, int m, vector<vector<char>> &v, int y, int x, char c) {
  v[y][x] = '.';
  int ret = 1;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= m || nx < 0 || nx >= n || v[ny][nx] == '.') continue;
    if (v[ny][nx] == c) ret += calc(n, m, v, ny, nx, c);
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(m, vector<char>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int a = 0, b = 0;
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    if (v[i][j] == 'W') {
      int x = calc(n, m, v, i, j, 'W');
      a += x * x;
    } else if (v[i][j] == 'B') {
      int x = calc(n, m, v, i, j, 'B');
      b += x * x;
    }
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}