#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<char>> v;

inline void dfs(vector<vector<char>> &v, int x, int y) {
  if (x > 0   && v[x-1][y] == '.') { v[x-1][y] = 'S'; dfs(v, x-1, y); }
  if (x < n-1 && v[x+1][y] == '.') { v[x+1][y] = 'N'; dfs(v, x+1, y); }
  if (y > 0   && v[x][y-1] == '.') { v[x][y-1] = 'E'; dfs(v, x, y-1); }
  if (y < m-1 && v[x][y+1] == '.') { v[x][y+1] = 'W'; dfs(v, x, y+1); }
}

void solve(void) {
  cin >> n >> m;
  int a, b; cin >> a >> b;

  v.resize(n, vector<char>(m, '.')); v[a][b] = 'E';
  dfs(v, a, b);

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) cout << v[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}