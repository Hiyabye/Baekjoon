#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> dist(n, vector<int>(n, 1e9));
  while (m--) {
    int a, b, t; cin >> a >> b >> t; a--; b--;
    dist[a][b] = t;
  }
  int k; cin >> k;
  vector<int> c(k);
  for (int i=0; i<k; i++) cin >> c[i], c[i]--;

  for (int i=0; i<n; i++) dist[i][i] = 0;
  for (int l=0; l<n; l++) for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    dist[i][j] = min(dist[i][j], dist[i][l] + dist[l][j]);
  }

  vector<pair<int, int>> ans(n, {0, 0});
  for (int i=0; i<n; i++) {
    for (int j=0; j<k; j++) {
      ans[i].first = max(ans[i].first, dist[c[j]][i] + dist[i][c[j]]);
    }
    ans[i].second = i+1;
  }
  
  sort(ans.begin(), ans.end());
  cout << ans[0].second;
  for (int i=1; i<n; i++) {
    if (ans[i].first == ans[0].first) cout << " " << ans[i].second;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}