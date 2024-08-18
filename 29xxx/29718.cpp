#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> q(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> q[i][j];
  int a; cin >> a;

  for (int i=1; i<n; i++) {
    for (int j=0; j<m; j++) {
      q[0][j] += q[i][j];
    }
  }

  int cur = 0;
  for (int i=0; i<a; i++) {
    cur += q[0][i];
  }

  int ans = cur;
  for (int i=a; i<m; i++) {
    cur += q[0][i] - q[0][i-a];
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}