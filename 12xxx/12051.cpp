#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int r, int c, vector<vector<char>> &v, int y, int x) {
  v[y][x] = '0';
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= r || nx < 0 || nx >= c || v[ny][nx] == '0') continue;
    dfs(r, c, v, ny, nx);
  }
}

void solve(int idx) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];
  int n; cin >> n;

  cout << "Case #" << idx << ":\n";
  while (n--) {
    char op; cin >> op;
    if (op == 'M') {
      int x, y, z; cin >> x >> y >> z;
      v[x][y] = z + '0';
    } else if (op == 'Q') {
      int ans = 0;
      vector<vector<char>> t = v;
      for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
        if (t[i][j] == '0') continue;
        dfs(r, c, t, i, j);
        ans++;
      }
      cout << ans << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}