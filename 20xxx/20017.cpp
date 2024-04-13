#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, a; cin >> n >> m >> a;
  vector<vector<int>> b(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> b[i][j];

  int ans = 0;
  for (int i=1; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (b[i][j] > b[i-1][j] * 2) ans += a;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}