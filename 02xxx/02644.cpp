#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve(void) {
  int n, m, a, b, x, y;
  cin >> n;
  vector<vector<bool> > adj(n+1, vector<bool>(n+1, false));
  cin >> a >> b;
  cin >> m;
  for (int i=0; i<m; i++) {
    cin >> x >> y;
    adj[x][y] = adj[y][x] = true;
  }

  vector<int> dist(n+1, -1);
  queue<int> q;
  q.push(a);
  dist[a] = 0;
  while (!q.empty()) {
    int cur = q.front();
    q.pop();

    for (int i=1; i<=n; i++) {
      if (adj[cur][i] && dist[i] == -1) {
        dist[i] = dist[cur] + 1;
        q.push(i);
      }
    }
  }
  cout << dist[b];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}