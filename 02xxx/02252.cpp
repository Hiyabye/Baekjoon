#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m, a, b;
  cin >> n >> m;

  vector<int> indegree(n+1, 0), adj[n+1];
  for (int i=0; i<m; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    indegree[b]++;
  }

  queue<int> q;
  for (int i=1; i<=n; i++) {
    if (indegree[i] == 0) q.push(i);
  }

  for (int i=1; i<=n; i++) {
    if (q.empty()) break;
    int cur = q.front();
    q.pop();
    cout << cur << " ";

    for (int j=0; j<adj[cur].size(); j++) {
      int nxt = adj[cur][j];
      if (--indegree[nxt] == 0) q.push(nxt);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}