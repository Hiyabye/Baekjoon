#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> d(n+1);
  for (int i=1; i<=n; i++) cin >> d[i];

  vector<vector<int> > g(n+1);
  vector<int> indegree(n+1, 0);
  while (k--) {
    int x, y; cin >> x >> y;
    g[x].push_back(y);
    indegree[y]++;
  }

  int w; cin >> w;
  vector<int> dp(n+1, 0);
  queue<int> q;
  for (int i=1; i<=n; i++) {
    if (indegree[i]) continue;
    dp[i] = d[i];
    q.push(i);
  }

  while (!q.empty()) {
    int cur = q.front(); q.pop();
    for (auto nxt : g[cur]) {
      dp[nxt] = max(dp[nxt], dp[cur] + d[nxt]);
      if (--indegree[nxt] == 0) q.push(nxt);
    }
  }
  cout << dp[w] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}