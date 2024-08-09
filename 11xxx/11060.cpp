#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];

  queue<pair<int, int>> q;
  vector<bool> visited(n+1, false);
  q.push({1, 0}); visited[1] = true;

  while (!q.empty()) {
    auto [cur, cnt] = q.front(); q.pop();
    if (cur == n) return cnt;
    for (int i=1; i<=a[cur] && cur+i<=n; i++) {
      if (visited[cur+i]) continue;
      q.push({cur+i, cnt+1});
      visited[cur+i] = true;
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