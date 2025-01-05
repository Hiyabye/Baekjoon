#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> g(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> g[i][j];

  int ans = 1e9;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    int sum = 0;
    for (int k=0; k<n; k++) for (int l=0; l<m; l++) {
      sum += g[k][l] * (abs(i-k) + abs(j-l));
    }
    ans = min(ans, sum);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}