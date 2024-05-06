#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calc(const vector<vector<int>> &dist, int n, int idx) {
  int ret = 0;
  for (int i=0; i<n; i++) {
    if (i == idx) continue;
    if (dist[idx][i] <= 2) ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> dist(n, vector<int>(n, 1e9));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    char c; cin >> c;
    dist[i][j] = (c == 'Y' ? 1 : 1e9);
  }
  
  for (int k=0; k<n; k++) for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans = max(ans, calc(dist, n, i));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}