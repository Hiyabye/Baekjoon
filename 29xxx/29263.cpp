#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

inline bool check(int n, int m, const vector<vector<int>> &v, int x, int y) {
  for (int i=0; i<4; i++) {
    int nx = x + dx[i], ny = y + dy[i];
    if (0 <= nx && nx < n && 0 <= ny && ny < m) {
      if (v[x][y] <= v[nx][ny]) return false;
    }
  }
  return true;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j]; 

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (check(n, m, v, i, j)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}