#include <iostream>
#include <vector>
using namespace std;

int calc(int n, int m, const vector<vector<char>> &v, int w, int b, int r) {
  int ret = 0;
  for (int i=0; i<w; i++) for (int j=0; j<m; j++) ret += v[i][j] != 'W';
  for (int i=w; i<w+b; i++) for (int j=0; j<m; j++) ret += v[i][j] != 'B';
  for (int i=w+b; i<n; i++) for (int j=0; j<m; j++) ret += v[i][j] != 'R';
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 1e9;
  for (int i=1; i<=n-2; i++) for (int j=1; i+j<=n-1; j++) for (int k=1; i+j+k<=n; k++) {
    ans = min(ans, calc(n, m, v, i, j, k));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}