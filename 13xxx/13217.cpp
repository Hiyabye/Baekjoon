#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  priority_queue<int> pq;
  while (n--) {
    int x; cin >> x;
    pq.push(x);
  }

  long long ans = 0;
  while (!pq.empty() && k) {
    int x = pq.top(); pq.pop();
    int t = max(1, min(x / m, k));
    ans += min(x, t * m);
    x -= min(x, t * m); k -= t;
    if (x) pq.push(x);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}