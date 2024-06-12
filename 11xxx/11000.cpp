#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());

  int ans = 0;
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i=0; i<n; i++) {
    while (!pq.empty() && pq.top() <= v[i].first) pq.pop();
    pq.push(v[i].second);
    ans = max(ans, (int)pq.size());
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}