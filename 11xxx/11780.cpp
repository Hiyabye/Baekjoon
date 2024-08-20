#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline vector<int> calc(const vector<vector<int>> &next, int u, int v) {
  if (next[u][v] == -1) return vector<int>();
  vector<int> path; path.push_back(u);
  while (u != v) {
    u = next[u][v];
    path.push_back(u);
  }
  return path;
}

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<vector<int>> dist(n, vector<int>(n, 1e9));
  vector<vector<int>> next(n, vector<int>(n, -1));

  while (m--) {
    int a, b, c; cin >> a >> b >> c; a--; b--;
    dist[a][b] = min(dist[a][b], c);
    next[a][b] = b;
  }
  for (int i=0; i<n; i++) dist[i][i] = 0;
  for (int i=0; i<n; i++) next[i][i] = i;

  for (int k=0; k<n; k++) for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (dist[i][k] + dist[k][j] < dist[i][j]) {
      dist[i][j] = dist[i][k] + dist[k][j];
      next[i][j] = next[i][k];
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << (dist[i][j] == 1e9 ? 0 : dist[i][j]) << " ";
    }
    cout << "\n";
  }

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (i == j) { cout << "0\n"; continue; }
    vector<int> path = calc(next, i, j);
    cout << path.size() << " ";
    for (int x : path) cout << x+1 << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}