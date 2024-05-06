#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, r; cin >> n >> m >> r;
  vector<int> t(n+1);
  for (int i=1; i<=n; i++) cin >> t[i];
  vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9));
  while (r--) {
    int a, b, l; cin >> a >> b >> l;
    dist[a][b] = dist[b][a] = l;
  }

  for (int i=1; i<=n; i++) dist[i][i] = 0;
  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    int cnt = 0;
    for (int j=1; j<=n; j++) {
      if (dist[i][j] <= m) cnt += t[j];
    }
    ans = max(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}