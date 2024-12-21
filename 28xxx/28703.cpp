#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
  for (int i=0; i<n; i++) pq.push(make_pair(a[i], i));

  long long ans = 1e9, mx = *max_element(a.begin(), a.end());
  while (pq.top().first <= 1e12) {
    auto [x, i] = pq.top(); pq.pop();
    ans = min(ans, mx - x);
    a[i] = x * 2;
    pq.push(make_pair(x * 2, i));
    mx = max(mx, x * 2);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}