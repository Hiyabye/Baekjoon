#include <iostream>
#include <vector>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 0;
  for (int x=0; x<n; x++) for (int y=0; y<m; y++) for (int d=0; d<8; d++) {
    int nx1 = x + dx[d], ny1 = y + dy[d], nx2 = x + dx[d] * 2, ny2 = y + dy[d] * 2;
    if (v[x][y] == 'F' &&
        0 <= nx1 && nx1 < n && 0 <= ny1 && ny1 < m && v[nx1][ny1] == 'O' &&
        0 <= nx2 && nx2 < n && 0 <= ny2 && ny2 < m && v[nx2][ny2] == 'X') ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}