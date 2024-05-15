#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, q; cin >> n >> m >> q;
  vector<pair<int, int>> v(n+1);
  for (int i=1; i<=n; i++) cin >> v[i].first, v[i].second = i;

  vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9)), dog(n+1, vector<int>(n+1, 0));
  for (int i=1; i<=n; i++) dist[i][i] = 0;
  while (m--) {
    int a, b, d; cin >> a >> b >> d;
    dist[a][b] = dist[b][a] = d;
    dog[a][b] = dog[b][a] = max(v[a].first, v[b].first);
  }
  sort(v.begin()+1, v.end());

  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    int time = max(dog[i][v[k].second], dog[v[k].second][j]);
    if (dist[i][v[k].second] + time + dist[v[k].second][j] >= dist[i][j] + dog[i][j]) continue;
    dist[i][j] = dist[j][i] = dist[i][v[k].second] + dist[v[k].second][j];
    dog[i][j] = dog[j][i] = time;
  }

  while (q--) {
    int s, t; cin >> s >> t;
    cout << (dist[s][t] < 1e9 ? dist[s][t] + dog[s][t] : -1) << "\n";
  }
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}