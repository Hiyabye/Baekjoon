#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n+1);
  while (m--) {
    int c1, c2; cin >> c1 >> c2;
    adj[c1].push_back(c2);
    adj[c2].push_back(c1);
  }

  queue<int> q;
  vector<bool> ans(n+1, false);
  q.push(1); ans[1] = true;

  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v : adj[u]) {
      if (ans[v]) continue;
      ans[v] = true;
      q.push(v);
    }
  }

  bool flag = true;
  for (int i=1; i<=n; i++) {
    if (ans[i]) continue;
    cout << i << "\n";
    flag = false;
  }
  if (flag) cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}