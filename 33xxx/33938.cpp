#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int solve(void) {
  int n, m; cin >> n >> m;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  vector<bool> visited(20001, false); visited[10000] = true;
  queue<pair<int, int>> q; q.push({0, 0});
  while (!q.empty()) {
    auto [cur, cnt] = q.front(); q.pop();
    if (cur == m) return cnt;
    for (int i=0; i<n; i++) {
      if (cur+p[i] < -10000 || cur+p[i] > 10000) continue;
      if (visited[cur+p[i]+10000]) continue;
      visited[cur+p[i]+10000] = true;
      q.push({cur+p[i], cnt+1});
    }
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}