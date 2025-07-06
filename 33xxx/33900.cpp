#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<vector<int>> &a, const vector<vector<int>> &b, int x, int y) {
  vector<vector<int>> c(b.size(), vector<int>(b[0].size()));
  for (int i=0; i<b.size(); i++) for (int j=0; j<b[0].size(); j++) {
    c[i][j] = a[i+x][j+y] - b[i][j];
  }
  for (int i=0; i<b.size(); i++) for (int j=0; j<b[0].size(); j++) {
    if (c[i][j] != c[0][0]) return false;
  }
  return true;
}

void solve(void) {
  int n, m, r, c; cin >> n >> m >> r >> c;
  vector<vector<int>> a(n, vector<int>(m)), b(r, vector<int>(c));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> b[i][j];

  int ans = 0;
  for (int i=0; i<=n-r; i++) for (int j=0; j<=m-c; j++) {
    if (check(a, b, i, j)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}