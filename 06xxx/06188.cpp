#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;
  vector<vector<int>> adj(n+1);
  while (c--) {
    int e, b1, b2; cin >> e >> b1 >> b2;
    adj[e].push_back(b1);
    adj[e].push_back(b2);
  }

  queue<pair<int, int>> q;
  vector<int> ans(n+1, 0);
  q.push({1, 1}); ans[1] = 1;

  while (!q.empty()) {
    auto [e, b] = q.front(); q.pop();
    for (int x : adj[e]) {
      if (ans[x]) continue;
      ans[x] = b+1;
      q.push({x, b+1});
    }
  }

  for (int i=1; i<=n; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}