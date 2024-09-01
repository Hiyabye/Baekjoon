#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<long long> w(n);
  for (int i=0; i<n; i++) cin >> w[i];
  sort(w.begin(), w.end(), greater<long long>());

  priority_queue<pair<int, int>> pq;
  while (m--) {
    int x, p; cin >> x >> p;
    pq.push({p, x});
  }

  long long ans = 0;
  for (int i=0; i<n && !pq.empty(); i++) {
    auto [p, x] = pq.top(); pq.pop();
    ans += w[i] * p;
    if (--x) pq.push({p, x});
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}