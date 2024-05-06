#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;
  vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9));
  for (int i=0; i<k; i++) {
    int a, b; cin >> a >> b;
    dist[a][b] = dist[b][a] = 1;
  }

  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    if (i == j) continue;
    if (dist[i][j] > 6) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Small World!" : "Big World!");
  return 0;
}