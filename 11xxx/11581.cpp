#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<bool>> dist(n+1, vector<bool>(n+1, false));
  for (int i=1; i<=n-1; i++) {
    int m; cin >> m;
    while (m--) {
      int c; cin >> c;
      dist[i][c] = true;
    }
  }

  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dist[i][j] = dist[i][j] || (dist[i][k] && dist[k][j]);
  }

  for (int i=1; i<=n; i++) {
    if (!dist[1][i]) continue;
    for (int j=1; j<=n; j++) {
      if (dist[i][j] && dist[j][i]) return true;
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "CYCLE" : "NO CYCLE");
  return 0;
}