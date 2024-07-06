#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  for (int i=1; i<n; i++) {
    for (int j=1; j<m; j++) {
      if (!v[i][j]) continue;
      v[i][j] += min({v[i-1][j-1], v[i-1][j], v[i][j-1]});
    }
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      ans = max(ans, v[i][j]);
    }
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}