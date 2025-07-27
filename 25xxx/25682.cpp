#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<vector<int>> a(n+1, vector<int>(m+1, 0)), b(n+1, vector<int>(m+1, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) {
    char c; cin >> c;
    if ((i + j) & 1) {
      a[i][j] = (c == 'B') + a[i][j-1] + a[i-1][j] - a[i-1][j-1];
      b[i][j] = (c == 'W') + b[i][j-1] + b[i-1][j] - b[i-1][j-1];
    } else {
      a[i][j] = (c == 'W') + a[i][j-1] + a[i-1][j] - a[i-1][j-1];
      b[i][j] = (c == 'B') + b[i][j-1] + b[i-1][j] - b[i-1][j-1];
    }
  }

  int ans = 1e9;
  for (int i=k; i<=n; i++) for (int j=k; j<=m; j++) {
    int cnt_a = a[i][j] - a[i-k][j] - a[i][j-k] + a[i-k][j-k];
    int cnt_b = b[i][j] - b[i-k][j] - b[i][j-k] + b[i-k][j-k];
    ans = min({ans, cnt_a, cnt_b});
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}