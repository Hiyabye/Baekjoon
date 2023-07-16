#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n, k, a, b;
  cin >> n;
  vector<vector<bool> > network(n+1, vector<bool>(n+1, false));
  cin >> k;
  for (int i=0; i<k; i++) {
    cin >> a >> b;
    network[a][b] = network[b][a] = true;
  }

  vector<bool> infected(n+1, false);
  queue<int> q;
  infected[1] = true;
  q.push(1);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();

    for (int i=1; i<=n; i++) {
      if (i == cur) continue;
      if (network[cur][i] && !infected[i]) {
        infected[i] = true;
        q.push(i);
      }
    }
  }

  int ans = 0;
  for (int i=2; i<=n; i++) {
    if (infected[i]) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}