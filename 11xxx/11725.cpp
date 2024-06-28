#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve(void) {
  int n, a, b;
  cin >> n;

  vector<int> adj[n+1];
  for (int i=0; i<n-1; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  vector<int> ans(n+1, 0);
  queue<int> q;
  q.push(1);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();

    for (int i=0; i<adj[cur].size(); i++) {
      int p = adj[cur][i];
      if (ans[p] == 0) {
        ans[p] = cur;
        q.push(p);
      }
    }
  }

  for (int i=2; i<=n; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}