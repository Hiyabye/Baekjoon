#include <iostream>
#include <vector>
using namespace std;

int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

inline bool valid(int n, int m, int x, int y) {
  return 0 <= x && x < n && 0 <= y && y < m;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) for (int k=0; k<8; k++) {
    if (!valid(n, m, i+dx[k]*3, j+dy[k]*3)) continue;
    if (v[i][j] != 'E' && v[i][j] != 'I') continue;
    if (v[i+dx[k]*1][j+dy[k]*1] != 'N' && v[i+dx[k]*1][j+dy[k]*1] != 'S') continue;
    if (v[i+dx[k]*2][j+dy[k]*2] != 'F' && v[i+dx[k]*2][j+dy[k]*2] != 'T') continue;
    if (v[i+dx[k]*3][j+dy[k]*3] != 'P' && v[i+dx[k]*3][j+dy[k]*3] != 'J') continue;
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