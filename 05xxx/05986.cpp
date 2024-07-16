#include <iostream>
#include <vector>
using namespace std;

int dz[6] = {0, 0, 0, 0, 1, -1};
int dy[6] = {1, 0, -1, 0, 0, 0};
int dx[6] = {0, 1, 0, -1, 0, 0};

void dfs(int n, vector<vector<vector<char>>> &v, int z, int y, int x) {
  for (int i=0; i<6; i++) {
    int nz = z + dz[i], ny = y + dy[i], nx = x + dx[i];
    if (nz < 0 || nz >= n || ny < 0 || ny >= n || nx < 0 || nx >= n || v[nz][ny][nx] == '.') continue;
    v[nz][ny][nx] = '.';
    dfs(n, v, nz, ny, nx);
  }
}

void solve(void) {
  int n; cin >> n;
  vector<vector<vector<char>>> v(n, vector<vector<char>>(n, vector<char>(n)));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) for (int k=0; k<n; k++) cin >> v[i][j][k];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) for (int k=0; k<n; k++) {
    if (v[i][j][k] == '.') continue;
    v[i][j][k] = '.';
    dfs(n, v, i, j, k);
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}