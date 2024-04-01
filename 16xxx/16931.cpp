#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 2 * n * m;
  for (int i=0; i<n; i++) ans += v[i][0];
  for (int i=0; i<n; i++) ans += v[i][m-1];
  for (int i=0; i<m; i++) ans += v[0][i];
  for (int i=0; i<m; i++) ans += v[n-1][i];
  for (int i=0; i<n; i++) for (int j=1; j<m; j++) ans += abs(v[i][j] - v[i][j-1]);
  for (int i=0; i<m; i++) for (int j=1; j<n; j++) ans += abs(v[j][i] - v[j-1][i]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}