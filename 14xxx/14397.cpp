#include <iostream>
#include <vector>
using namespace std;

int dx1[6] = {0, 0, 1, 1, -1, -1}, dx2[6] = {0, 0, 1, 1, -1, -1};
int dy1[6] = {1, -1, 0, -1, 0, -1}, dy2[6] = {1, -1, 0, 1, 0, 1};

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 0;
  for (int x=0; x<n; x++) for (int y=0; y<m; y++) for (int i=0; i<6; i++) {
    int nx = x + (x & 1 ? dx2[i] : dx1[i]), ny = y + (x & 1 ? dy2[i] : dy1[i]);
    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
    if (v[x][y] == '#' && v[nx][ny] == '.') ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}