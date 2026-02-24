#include <iostream>
#include <queue>
#include <vector>
using namespace std;

inline int root(const vector<int> &p, int x) {
  return p[x] == x ? x : root(p, p[x]);
}

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<vector<int>> a(n+1, vector<int>(n+1, 0));
  for (int i=1; i<=n; i++) {
    cin >> a[i][0];
    for (int j=1; j<=a[i][0]; j++) cin >> a[i][j];
  }

  vector<int> parent(n+1, 0);
  for (int i=1; i<=n; i++) {
    if (!parent[i]) parent[i] = i;
    for (int j=1; j<=a[i][0]; j++) {
      parent[a[i][j]] = i;
    }
  }
  int r = root(parent, 1);
  
  queue<int> q; q.push(r);
  vector<bool> visited(n+1, false); visited[r] = true;
  vector<vector<int>> ans(n+1, vector<int>(n+1, 0));
  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int i=1; i<=a[u][0] && i<=m; i++) {
      int v = a[u][i];
      if (visited[v]) continue;
      visited[v] = true;
      q.push(v);
      ans[u][++ans[u][0]] = v;
    }
    for (int i=m+1; i<=a[u][0]; i++) {
      a[ans[u][1]][++a[ans[u][1]][0]] = a[u][i];
    }
  }

  cout << "1\n0\n";
  for (int i=1; i<=n; i++) {
    cout << ans[i][0] << " ";
    for (int j=1; j<=ans[i][0]; j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}