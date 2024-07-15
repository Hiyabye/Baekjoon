#include <iostream>
#include <vector>
using namespace std;

int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int n, vector<vector<char>> &v, int y, int x) {
  for (int i=0; i<8; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= n || v[ny][nx] == '0') continue;
    v[ny][nx] = '0';
    dfs(n, v, ny, nx);
  }
}

void solve(int idx, int n) {
  vector<vector<char>> v(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j] == '0') continue;
    v[i][j] = '0';
    dfs(n, v, i, j);
    ans++;
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1, n;
  while (cin >> n) solve(idx++, n);
  return 0;
}